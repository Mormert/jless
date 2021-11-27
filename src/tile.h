#pragma once

#include "pieces/piece_interface.h"

#include <optional>
#include <memory>

class Tile
{
public:
	bool HasPiece() const
	{
		return mPiece.has_value();
	}

	PieceInterface* GetPiece() const
	{
		return &*mPiece.value();
	}

	void SetPiece(std::unique_ptr<PieceInterface>&& piece)
	{
		mPiece = std::move(piece);
	}

private:
	std::optional<std::unique_ptr<PieceInterface>> mPiece;
};