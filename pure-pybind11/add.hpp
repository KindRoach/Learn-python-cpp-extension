#pragma once
#include <pybind11/pybind11.h>

void bind_add(pybind11::module_ &m)
{
    m.def("add", [](int x, int y)
          { return x + y; });
}