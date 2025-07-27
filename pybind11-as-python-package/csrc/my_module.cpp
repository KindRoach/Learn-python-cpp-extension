#include <pybind11/pybind11.h>

#include "add.hpp"
#include "subtract.hpp"

PYBIND11_MODULE(my_cpp_module, m)
{
    bind_add(m);
    bind_subtract(m);
}
