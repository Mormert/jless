#include "pieces.h"

char Rook::GetPieceSymbol()
{
	return 'R';
}

int Rook::GetPieceValue()
{
	return 5;
}

std::vector<Move> Rook::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{
	std::vector<Move> moveRet;
	return moveRet;
}


char Queen::GetPieceSymbol()
{
	return 'Q';
}

int Queen::GetPieceValue()
{
	return 9;
}

std::vector<Move> Queen::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{
	std::vector<Move> moveRet;
	return moveRet;
}

char Pawn::GetPieceSymbol()
{
	return 'P';
}

int Pawn::GetPieceValue()
{
	return 1;
}

std::vector<Move> Pawn::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{

	std::vector<Move> movesForward;

	if (pieceOwner == PieceOwner::WHITE)
	{
		if (y < 8)
		{
			movesForward.push_back({ x, y + 1 });
		}
		if (y < 7)
		{
			movesForward.push_back({ x, y + 2 });
		}
	}
	else
	{
		if (y > 1)
		{
			movesForward.push_back({ x, y - 1 });
		}
		if (y > 2)
		{
			movesForward.push_back({ x, y - 2 });
		}
	}

	std::vector<Move> movesAttack;

	if (pieceOwner == PieceOwner::WHITE)
	{
		if (x + 1 <= 8 && y + 1 <= 8)
		{
			if (board.HasPieceOfColor(x + 1, y + 1, PieceOwner::BLACK))
			{
				movesAttack.push_back({ x + 1, y + 1, board.GetPieceValueAtPosition(x + 1, y + 1) });
			}
		}

		if (x - 1 >= 0 && y + 1 <= 8)
		{
			if (board.HasPieceOfColor(x - 1, y + 1, PieceOwner::BLACK))
			{
				movesAttack.push_back({ x - 1, y + 1, board.GetPieceValueAtPosition(x - 1, y + 1) });
			}
		}
	}

	if (pieceOwner == PieceOwner::BLACK)
	{
		if (x + 1 <= 8 && y - 1 >= 0)
		{
			if (board.HasPieceOfColor(x + 1, y - 1, PieceOwner::WHITE))
			{
				movesAttack.push_back({ x + 1, y - 1, board.GetPieceValueAtPosition(x + 1, y - 1) });
			}
		}

		if (x - 1 >= 0 && y - 1 >= 0)
		{
			if (board.HasPieceOfColor(x - 1, y - 1, PieceOwner::WHITE))
			{
				movesAttack.push_back({ x - 1, y - 1, board.GetPieceValueAtPosition(x - 1, y - 1) });
			}
		}
	}

	std::vector<Move> moveRet;

	for (auto&& move : movesForward)
	{
		if (!board.HasPiece(move.x, move.y))
		{
			moveRet.push_back(move);
		}
	}

	for (auto&& move : movesAttack)
	{
		moveRet.push_back(move);
	}

	return moveRet;
}

char Knight::GetPieceSymbol()
{
	return 'N';
}

int Knight::GetPieceValue()
{
	return 3;
}

std::vector<Move> Knight::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{
	std::vector<Move> moveRet;
	return moveRet;
}

char King::GetPieceSymbol()
{
	return 'K';
}

int King::GetPieceValue()
{
	return 100;
}

std::vector<Move> King::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{
	std::vector<Move> moveRet;
	return moveRet;
}


char Bishop::GetPieceSymbol()
{
	return 'B';
}

int Bishop::GetPieceValue()
{
	return 3;
}

std::vector<Move> Bishop::GetAvailableMoves(Board& board, PieceOwner pieceOwner, int x, int y)
{
	std::vector<Move> moveRet;
	return moveRet;
}