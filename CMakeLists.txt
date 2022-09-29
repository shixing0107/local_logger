cmake_minimum_required(VERSION 3.14)

project(rslogger LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(rslogger
  main.cpp
  rslog.h
  rslog.cpp
  curthread.h
  curthread.cpp
  comparable.h
  timestamp.h
  timestamp.cpp
  floatingbuffer.cpp
  floatingbuffer.h
  logstream.h
  logstream.cpp
  stringpiece.h
  stringpiece.cpp
  fmt.h
  fmt.cpp
  rslogging.h
  rslogging.cpp
)
target_link_libraries(rslogger Qt${QT_VERSION_MAJOR}::Core)
