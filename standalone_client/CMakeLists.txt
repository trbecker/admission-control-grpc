project(admission_client)

cmake_minimum_required(VERSION 3.10)

add_executable(admission_client admission_client.cpp)

target_link_libraries(admission_client 
        admission_clnt grpc++ grpc protobuf pthread)

install(TARGETS admission_client
    DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)