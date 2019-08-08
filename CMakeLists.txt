cmake_minimum_required(VERSION 3.10)

set (CMAKE_CXX_STANDARD 11)

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})

add_executable(pipe_dream_read pipe_dream_read.cc pose.pb.cc)
target_link_libraries(pipe_dream_read ${PROTOBUF_LIBRARY})

add_executable(pipe_dream_write pipe_dream_write.cc pose.pb.cc)
target_link_libraries(pipe_dream_write ${PROTOBUF_LIBRARY})