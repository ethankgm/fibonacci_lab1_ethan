cmake_minimum_required(VERSION 3.30)
project(fibonacci_project C)

set(CMAKE_C_STANDARD 11)

add_executable(fibonacci_project main.c
        fibonacci_recursive.c
        fibonacci_memo.c
        fibonacci_iter_tab.c
        fibonacci_iter.c
        globals.c
)