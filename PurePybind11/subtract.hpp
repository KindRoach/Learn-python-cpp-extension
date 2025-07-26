#pragma once
#include <pybind11/pybind11.h>

void bind_subtract(pybind11::module_ &m)
{
    m.def("subtract", [](int x, int y)
          { return x - y; });
}