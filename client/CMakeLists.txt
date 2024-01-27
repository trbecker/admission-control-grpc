project(admission_clnt)

cmake_minimum_required(VERSION 3.10)

include_directories(../proto)

add_library(admission_clnt 
    ../proto/admission.grpc.pb.cc
    ../proto/admission.pb.cc
    admission_clnt.cpp)

install(TARGETS admission_clnt
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
install(FILES admission_clnt.h
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/admissiongrpc)