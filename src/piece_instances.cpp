#include "piece_instances.h"

class PieceInstances
{
public:
	PieceInstances()
	{
		bishop = new Bishop();
		king = new King();
		knight = new Knight();
		pawn = new Pawn();
		queen = new Queen();
		rook = new Rook();
	}

	~PieceInstances()
	{
		delete bishop;
		delete king;
		delete knight;
		delete pawn;
		delete queen;
		delete rook;
	}
};

// Use RAII to create instances of piece types
static PieceInstances piece_instances;