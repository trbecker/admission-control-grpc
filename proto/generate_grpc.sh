#!/bin/bash

protoc -I . --grpc_out . --cpp_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` admission.proto
