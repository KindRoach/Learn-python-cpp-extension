FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN --mount=type=cache,target=/var/cache/apt \
    apt-get update && \
    apt-get install -y \
    # python libs
    python3-full \
    python3-dev \
    pybind11-dev \
    # dev tools
    git \
    # build tools
    build-essential \
    cmake \
    gdb
