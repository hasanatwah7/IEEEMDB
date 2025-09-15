cmake_minimum_required(VERSION 3.31)
project(IEEEMDB)

set(CMAKE_CXX_STANDARD 20)

add_executable(IEEEMDB main.cpp
        movie.h
        user_review.h
        watch_session.h
        admin.h
        enduser.h)
