project(admission_grpc C CXX)

cmake_minimum_required(VERSION 3.10)

add_library(admission_grpc
    admission.grpc.pb.cc
    admission.pb.cc)

install(TARGETS admission_grpc DESTINATION ${CMAKE_INSTALL_LIBDIR}/lib)