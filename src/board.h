#pragma once


#include "tile.h"

#include <array>

class Board
{
public:

	void SetupDefaultBoard();
	void ConsoleDraw();

private:
	std::array<std::array<Tile, 8>,8> mTiles;
};