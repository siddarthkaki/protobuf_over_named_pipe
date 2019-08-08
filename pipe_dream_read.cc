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
    int fd, rd;

    Proto::Pose pose;

    // FIFO file path 
    std::string myfifostr = "pipe_dream";
    const char * myfifo = myfifostr.c_str();
  
    std::string data_str;

    // Creating the named file(FIFO) 
    // mkfifo(<pathname>, <permission>)

    // Open FIFO for read only, without blocking
    fd = open(myfifo, O_RDONLY | O_NONBLOCK);
  
    while (1) 
    { 
        // read byte size of pose object from pipe
        size_t size;
        rd = read(fd, &size, sizeof(size)); //read len

        if (rd == sizeof(size)) // if successfully received size
        {
            // allocate sufficient buffer space
            void *buffer = malloc(size);

            // read serialised pose object from pipe
            rd = read(fd, buffer, size);

            // deserialise from buffer array
            pose.ParseFromArray(buffer, size);
            
            // print received value of x
            std::cout << pose.pos().x() << std::endl;
        }
        else
        { // if no size message found
            std::cout << "pipe empty" << std::endl;
        }
        
        // sleep for 0.1 sec
        usleep(100000);
    }

    // close FIFO
    close(fd);

    return 0; 
}