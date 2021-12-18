#pragma once

#include "piece_owner_enum.h"
#include "board.h"

#include <vector>
#include <tuple>

class Board;

struct Move
{
	int x, y;
	int pointsEarned = 0; // 0 means no kill
};

class PieceInterface
{
public:

	PieceInterface() {}
	virtual ~PieceInterface() {}

	virtual char GetPieceSymbol() = 0;
	virtual int GetPieceValue() = 0;

	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y) = 0;
};
