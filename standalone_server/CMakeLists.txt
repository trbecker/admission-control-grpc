project(admission_server)

cmake_minimum_required(VERSION 3.10)

add_executable(admission_server admission_server.cpp)

target_link_libraries(admission_server 
        admission_srv grpc++ grpc protobuf pthread)

install(TARGETS admission_server
    DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)