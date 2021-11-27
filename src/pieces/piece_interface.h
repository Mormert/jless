#pragma once

enum class PieceOwner
{
	WHITE,
	BLACK
};

class PieceInterface
{
public:

	virtual char GetPieceSymbol() = 0;

	virtual int GetPieceValue() = 0;

	void SetOwner(PieceOwner pieceOwner)
	{
		mOwner = pieceOwner;
	}

	PieceOwner GetOwner()
	{
		return mOwner;
	}

private:
	PieceOwner mOwner;
};