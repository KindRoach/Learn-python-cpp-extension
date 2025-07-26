cmake_minimum_required(VERSION 3.15)

project(my_module)

find_package(pybind11 REQUIRED)

pybind11_add_module(my_module my_module.cpp)
