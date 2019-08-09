# protobuf_over_named_pipe
Basic example of transferring a ProtoBuf object over a named pipe

## Dependencies
* C++11 or later
* [CMake](https://cmake.org/) (3.10 or later)
* [Protocol Buffers](https://developers.google.com/protocol-buffers/) (tested with 3.0.0)

## Build instructions

Clone the repository:
```
git clone https://github.com/siddarthkaki/protobuf_over_named_pipe
```

CMake is employed for building. From the cloned directory, execute:
```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ../
make
```

## Usage

### First Run

For the first run, perform the following set-up. From the ```build``` directory, execute the following to make the named pipe to be used:
```
mkfifo pipe_dream
```

### Running the example

Have ready two terminal consoles, both `cd`'d to the ```build``` directory.
From one terminal, run the write executable:
```
./pipe_dream_write
```

From the other terminal, run the read executable:
```
./pipe_dream_read
```
