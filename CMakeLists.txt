# CMakeList.txt : CMake project for jless, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("jless")

# Add source to this project's executable.
add_executable (jless "src/jless.cpp"  "src/board.cpp" "src/piece_instances.cpp"   "src/piece.cpp" "src/tile.cpp" "src/pieces.h" "src/pieces.cpp")

target_compile_features(jless PUBLIC cxx_std_17)