#cmake_minimum_required(VERSION 3.12)
project(C__Visitor)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__Visitor src/Expression.cpp src/Constante.cpp src/TestVisiteurDerivee.cpp src/Fois.cpp src/OpBinaire.cpp src/Plus.cpp src/Variable.cpp include/Constante.h include/Expression.h include/Fois.h include/OpBinaire.h include/Variable.h include/Plus.h src/VisitorDerivee.cpp include/VisitorDerivee.h include/Visitor.h)
