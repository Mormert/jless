#pragma once

#include "piece_interface.h"

class Bishop : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override
	{
		return 'B';
	}

	virtual int GetPieceValue()
	{
		return 3;
	}

};