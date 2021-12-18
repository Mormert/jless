#include "tile.h"

bool Tile::HasPiece()
{
	return mPiece.has_value();
}

Piece& Tile::GetPiece()
{
	return mPiece.value();
}

void Tile::SetPiece(Piece piece)
{
	mPiece = piece;
}

void Tile::RemovePiece()
{
	mPiece.reset();
}