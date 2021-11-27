#include "board.h"

#include "pieces/piece_pawn.h"
#include "pieces/piece_queen.h"
#include "pieces/piece_knight.h"
#include "pieces/piece_rook.h"
#include "pieces/piece_bishop.h"
#include "pieces/piece_king.h"

#include <string>
#include <iostream>

void Board::SetupDefaultBoard()
{
	for (int i = 0; i < 8; i++)
	{
		auto pawnWhite = std::make_unique<Pawn>();
		auto pawnBlack = std::make_unique<Pawn>();

		pawnWhite->SetOwner(PieceOwner::WHITE);
		pawnBlack->SetOwner(PieceOwner::BLACK);

		mTiles[i][6].SetPiece(std::move(pawnWhite));
		mTiles[i][1].SetPiece(std::move(pawnBlack));
	}

	auto rookBlack1 = std::make_unique<Rook>();
	auto rookBlack2 = std::make_unique<Rook>();
	auto rookWhite1 = std::make_unique<Rook>();
	auto rookWhite2 = std::make_unique<Rook>();

	rookBlack1->SetOwner(PieceOwner::BLACK);
	rookBlack2->SetOwner(PieceOwner::BLACK);
	rookWhite1->SetOwner(PieceOwner::WHITE);
	rookWhite2->SetOwner(PieceOwner::WHITE);

	mTiles[0][0].SetPiece(std::move(rookBlack1));
	mTiles[7][0].SetPiece(std::move(rookBlack2));
	mTiles[0][7].SetPiece(std::move(rookWhite1));
	mTiles[7][7].SetPiece(std::move(rookWhite2));

	auto knightBlack1 = std::make_unique<Knight>();
	auto knightBlack2 = std::make_unique<Knight>();
	auto knightWhite1 = std::make_unique<Knight>();
	auto knightWhite2 = std::make_unique<Knight>();

	knightBlack1->SetOwner(PieceOwner::BLACK);
	knightBlack2->SetOwner(PieceOwner::BLACK);
	knightWhite1->SetOwner(PieceOwner::WHITE);
	knightWhite2->SetOwner(PieceOwner::WHITE);

	mTiles[1][0].SetPiece(std::move(knightBlack1));
	mTiles[6][0].SetPiece(std::move(knightBlack2));
	mTiles[1][7].SetPiece(std::move(knightWhite1));
	mTiles[6][7].SetPiece(std::move(knightWhite2));

	auto bishopBlack1 = std::make_unique<Bishop>();
	auto bishopBlack2 = std::make_unique<Bishop>();
	auto bishopWhite1 = std::make_unique<Bishop>();
	auto bishopWhite2 = std::make_unique<Bishop>();

	bishopBlack1->SetOwner(PieceOwner::BLACK);
	bishopBlack2->SetOwner(PieceOwner::BLACK);
	bishopWhite1->SetOwner(PieceOwner::WHITE);
	bishopWhite2->SetOwner(PieceOwner::WHITE);

	mTiles[2][0].SetPiece(std::move(bishopBlack1));
	mTiles[5][0].SetPiece(std::move(bishopBlack2));
	mTiles[2][7].SetPiece(std::move(bishopWhite1));
	mTiles[5][7].SetPiece(std::move(bishopWhite2));


	auto kingBlack = std::make_unique<King>();
	auto kingWhite = std::make_unique<King>();

	kingBlack->SetOwner(PieceOwner::BLACK);
	kingWhite->SetOwner(PieceOwner::WHITE);

	mTiles[4][7].SetPiece(std::move(kingWhite));
	mTiles[3][0].SetPiece(std::move(kingBlack));

	auto queenBlack = std::make_unique<Queen>();
	auto queenWhite = std::make_unique<Queen>();

	queenBlack->SetOwner(PieceOwner::BLACK);
	queenWhite->SetOwner(PieceOwner::WHITE);

	mTiles[3][7].SetPiece(std::move(queenWhite));
	mTiles[4][0].SetPiece(std::move(queenBlack));

}

void Board::ConsoleDraw()
{
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			const auto& tile = mTiles[x][y];
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
				auto piece = tile.GetPiece();
				auto symbol = piece->GetPieceSymbol();
				if (piece->GetOwner() == PieceOwner::BLACK)
				{
					symbol = std::tolower(symbol);
				}
				std::cout << '[' << symbol << ']';
			}
		}
		std::cout << '\n';
	}
}