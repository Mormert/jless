#pragma once

#include "piece_interface.h"

class Knight : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override
	{
		return 'N';
	}

	virtual int GetPieceValue()
	{
		return 3;
	}

};