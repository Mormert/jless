#pragma once

#include "piece_interface.h"

class King : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override
	{
		return 'K';
	}

	virtual int GetPieceValue()
	{
		return 100;
	}

};