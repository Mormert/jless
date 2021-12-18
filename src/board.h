#pragma once


#include "tile.h"

#include <array>

class Board
{
public:

	bool HasPiece(int x, int y)
	{
		return mTiles[x][y].HasPiece();
	}

	bool HasPieceOfColor(int x, int y, PieceOwner pieceOwner)
	{
		if (mTiles[x][y].HasPiece())
		{
			auto& piece = mTiles[x][y].GetPiece();
			if (piece.GetOwner() == pieceOwner)
			{
				return true;
			}
		}

		return false;
	}

	// returns 0 if there are no piece at the gives pos
	int GetPieceValueAtPosition(int x, int y)
	{
		if (HasPiece(x, y))
		{
			return mTiles[x][y].GetPiece().GetPieceValue();
		}
		return 0;
	}

	void SetupDefaultBoard();
	void ConsoleDraw();

private:
	std::array<std::array<Tile, 8>,8> mTiles;
};