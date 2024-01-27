project(admission_server)

cmake_minimum_required(VERSION 3.10)

include_directories(../proto)

add_library(admission_srv 
    ../proto/admission.grpc.pb.cc
    ../proto/admission.pb.cc
    admission_srv.cpp)

install(TARGETS admission_srv
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
install(FILES admission_srv.h
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/admissiongrpc)