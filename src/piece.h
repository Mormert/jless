#pragma once

#include "piece_owner_enum.h"

#include <vector>

class PieceInterface;
class Board;
struct Move;

class Piece
{

private:
	PieceInterface* mPieceInterface;
	PieceOwner mPieceOwner;

public:
	Piece(PieceInterface* pieceInterface, PieceOwner pieceOwner);

	char GetPieceSymbol();

	int GetPieceValue();

	PieceOwner GetOwner();

	std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};