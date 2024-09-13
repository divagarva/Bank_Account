cmake_minimum_required(VERSION 3.27)
project(Bank_Account C)

set(CMAKE_C_STANDARD 11)

add_executable(Bank_Account main.c
        BankAccount.h
        BankAccount.c)
