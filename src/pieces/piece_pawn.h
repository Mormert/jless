#pragma once

#include "piece_interface.h"

class Pawn : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override
	{
		return 'P';
	}

	virtual int GetPieceValue()
	{
		return 1;
	}

};