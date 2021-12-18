#pragma once

#include "piece.h"

#include <optional>
#include <memory>

class Tile
{
public:
	bool HasPiece();

	Piece& GetPiece();

	void SetPiece(Piece piece);

	void RemovePiece();

private:
	std::optional<Piece> mPiece;
};