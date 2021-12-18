#pragma once

#include "piece_interface.h"

class Rook : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override;
	virtual int GetPieceValue();
	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};

class Queen : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override;
	virtual int GetPieceValue();
	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};

class Pawn : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override;
	virtual int GetPieceValue();
	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};

class Knight : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override;
	virtual int GetPieceValue();
	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};

class King : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override;
	virtual int GetPieceValue();
	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};

class Bishop : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override;
	virtual int GetPieceValue();
	virtual std::vector<Move> GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y);
};