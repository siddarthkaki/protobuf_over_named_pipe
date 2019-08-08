#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h>
#include "pose.pb.h"
  
int main()
{ 
    int fd;

    Proto::Pose pose;

    Proto::Position *pos = pose.mutable_pos();
    Proto::Attitude *att = pose.mutable_att();
    pos->set_x(0.0);
    pos->set_y(0.0);
    pos->set_z(0.0);
    att->set_qw(1.0);
    att->set_qx(0.0);
    att->set_qy(0.0);
    att->set_qz(0.0);

    // FIFO file path
    std::string myfifostr = "pipe_dream";
    const char * myfifo = myfifostr.c_str();
  
    // Creating the named file(FIFO) 
    // mkfifo(<pathname>, <permission>)

    while (1) 
    {
        // Open FIFO for write only, without blocking
        fd = open(myfifo, O_WRONLY | O_NONBLOCK);

        // store byte size of pose object
        size_t size = pose.ByteSize();

        // allocate sufficient buffer space
        void *buffer = malloc(size);

        // serialise to the buffer array
        pose.SerializeToArray(buffer, size);

        // write size of pose object to pipe
        write(fd, &size, sizeof(size));

        // write serialised pose object to pipe
        write(fd, buffer, size);

        // print current value of x
        std::cout << pose.pos().x() << std::endl;

        // update x
        pos->set_x(pose.pos().x() + 1);

        // close FIFO
        close(fd);

        // sleep for 0.5 sec
        usleep(500000);
    }
    
    return 0; 
}