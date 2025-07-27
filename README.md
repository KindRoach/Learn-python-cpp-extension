# Learn Python-C++ Extension

This repository demonstrates three different approaches to creating Python packages with C++ extensions using pybind11. 
Each directory contains a complete example showing different patterns and use cases.

## Project Structure

```
.
├── pure-python/                    # Pure Python package example
├── pure-pybind11/                  # Standalone pybind11 module
├── pybind11-as-python-package/     # Python package with C++ extension
└── test_python_lib.py              # Test script for installed packages
```

## Examples Overview

### 1. Pure Python Package (`pure-python/`)

A traditional Python package without any C++ extensions, serving as a baseline comparison.

**Features:**
- Standard setuptools-based build system
- Pure Python implementation of `add` and `subtract` functions
- Includes numpy dependency and optional dev dependencies

**Build and Install:**
```bash
cd pure-python
pip install -e .
```

### 2. Pure pybind11 Module (`pure-pybind11/`)

A standalone C++ module built with pybind11 and CMake, without Python packaging.

**Features:**
- Direct CMake build system
- C++ implementation with pybind11 bindings
- Produces a `.so` file that can be imported directly

**Build:**
```bash
cd pure-pybind11
cmake -S . -B build
cmake --build build
```

### 3. pybind11 as Python Package (`pybind11-as-python-package/`)

A modern Python package that includes C++ extensions, using scikit-build-core for seamless integration.

**Features:**
- Modern build system with `scikit-build-core`
- C++ extensions integrated into Python package structure
- Automatic CMake integration
- Proper Python package distribution

**Build and Install:**
```bash
cd pybind11-as-python-package
pip install -e .
```
