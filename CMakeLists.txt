# CMakeList.txt : CMake project for AdventureLog, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(AdventureLog)

# Add source to this project's executable.
# add_executable (AdventureLog "AdventureLog.cpp" "AdventureLog.h" "ClientAdventurer.h")
add_executable (ServerLog "ServerLog.cpp" "ServerLog.h")
add_executable (ClientAdventurer "ClientAdventurer.cpp" "ClientAdventurer.h")
# TODO: Add tests and install targets if needed.
