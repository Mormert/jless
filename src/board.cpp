#include "board.h"

#include "piece_instances.h"

#include <string>
#include <iostream>

void Board::SetupDefaultBoard()
{
	for (int i = 0; i < 8; i++)
	{
		mTiles[i][6].SetPiece({ pawn, PieceOwner::WHITE });
		mTiles[i][1].SetPiece({ pawn, PieceOwner::BLACK });
	}

	mTiles[0][0].SetPiece({ rook, PieceOwner::BLACK });
	mTiles[7][0].SetPiece({ rook, PieceOwner::BLACK });
	mTiles[0][7].SetPiece({ rook, PieceOwner::WHITE });
	mTiles[7][7].SetPiece({ rook, PieceOwner::WHITE });

	mTiles[1][0].SetPiece({ knight, PieceOwner::BLACK });
	mTiles[6][0].SetPiece({ knight, PieceOwner::BLACK });
	mTiles[1][7].SetPiece({ knight, PieceOwner::WHITE });
	mTiles[6][7].SetPiece({ knight, PieceOwner::WHITE });

	mTiles[2][0].SetPiece({ bishop, PieceOwner::BLACK });
	mTiles[5][0].SetPiece({ bishop, PieceOwner::BLACK });
	mTiles[2][7].SetPiece({ bishop, PieceOwner::WHITE });
	mTiles[5][7].SetPiece({ bishop, PieceOwner::WHITE });

	mTiles[4][7].SetPiece({ king, PieceOwner::WHITE });
	mTiles[3][0].SetPiece({ king, PieceOwner::BLACK });

	mTiles[3][7].SetPiece({ queen, PieceOwner::WHITE });
	mTiles[4][0].SetPiece({ queen, PieceOwner::BLACK });
}

void Board::ConsoleDraw()
{
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			auto& tile = mTiles[x][y];
			if (!tile.HasPiece())
			{
				if ((x + y) % 2 == 0)
				{
					std::cout << '[' << char(254) << ']';
				}
				else
				{
					std::cout << "[ ]";
				}
			}
			else
			{
				auto& piece = tile.GetPiece();
				auto symbol = piece.GetPieceSymbol();
				if (piece.GetOwner() == PieceOwner::BLACK)
				{
					symbol = std::tolower(symbol);
				}
				std::cout << '[' << symbol << ']';
			}
		}
		std::cout << '\n';
	}
}