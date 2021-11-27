#pragma once

#include "piece_interface.h"

class Queen : public PieceInterface
{
public:
	virtual char GetPieceSymbol() override
	{
		return 'Q';
	}

	virtual int GetPieceValue()
	{
		return 9;
	}

};