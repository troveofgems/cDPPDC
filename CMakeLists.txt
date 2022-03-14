cmake_minimum_required(VERSION 3.20)
project(cCPPDC)

set(CMAKE_CXX_STANDARD 14)

add_executable(cCPPDC main.cpp sections/s6/models/House/House.h sections/s6/models/House/House.cpp sections/s6/models/Rectangle/Rectangle.h sections/s6/models/Rectangle/Rectangle.cpp sections/s6/models/Book/Book.h sections/s6/models/Book/Book.cpp sections/s6/models/BankAccount/BankAccount.cpp sections/s6/models/BankAccount/BankAccount.h sections/s6/models/Pizza/Pizza.h sections/s6/models/Pizza/Pizza.cpp sections/s6/models/Circle/Circle.h sections/s6/models/Circle/Circle.cpp DynamicDogs.cpp DynamicDogs.h)
