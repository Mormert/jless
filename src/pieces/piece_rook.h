#pragma once

#include "piece_interface.h"

class Rook : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override
	{
		return 'R';
	}

	virtual int GetPieceValue()
	{
		return 5;
	}

};