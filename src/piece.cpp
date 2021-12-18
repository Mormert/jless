#include "piece.h"

#include "piece_interface.h"

Piece::Piece(PieceInterface* pieceInterface, PieceOwner pieceOwner) :
	mPieceOwner{ pieceOwner }
{
	mPieceInterface = pieceInterface;
}

char Piece::GetPieceSymbol()
{
	return mPieceInterface->GetPieceSymbol();
}

int Piece::GetPieceValue()
{
	return mPieceInterface->GetPieceValue();
}

PieceOwner Piece::GetOwner()
{
	return mPieceOwner;
}

std::vector<Move> Piece::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{
	return mPieceInterface->GetAvailableMoves(board, pieceOwner, x, y);
}