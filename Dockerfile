# Dockerfile with with G++, CMake, Google Test and ZSH

FROM alpine:latest

RUN apk add --no-cache -q -f git cmake make g++ gdb zsh

RUN git clone -q https://github.com/google/googletest.git /googletest \
  && mkdir -p /googletest/build \
  && cd /googletest/build \
  && cmake .. && make && make install \
  && cd / && rm -rf /googletest

RUN wget https://github.com/robbyrussell/oh-my-zsh/raw/master/tools/install.sh -O - | zsh || true

ENV SHELL=/bin/zsh