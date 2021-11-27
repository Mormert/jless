# CMakeList.txt : CMake project for jless, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("jless")

# Add source to this project's executable.
add_executable (jless "src/jless.cpp" "src/jless.h" "src/pieces/piece_interface.h" "src/board.h" "src/tile.h" "src/board.cpp" "src/pieces/piece_pawn.h" "src/pieces/piece_knight.h" "src/pieces/piece_queen.h" "src/pieces/piece_rook.h" "src/pieces/piece_bishop.h" "src/pieces/piece_king.h")

target_compile_features(jless PUBLIC cxx_std_17)