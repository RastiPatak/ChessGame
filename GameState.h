#pragma once

#include "ChessPiece.h"
#include <vector>

namespace gameState
{
	class GameState
	{
		gameFunctions::ChessPiece* whitePieces[16];
		gameFunctions::ChessPiece* blackPieces[16];

	public:
		GameState() { Init(); }

		gameFunctions::ChessPiece** GetWhite() { return whitePieces; }
		gameFunctions::ChessPiece** GetBlack() { return blackPieces; }

		void SetWhitePiece(int& index, gameFunctions::ChessPiece* piece);
		void SetBlackPiece(int& index, gameFunctions::ChessPiece* piece);

	private:
		void SetPiece(bool& side, int& index, gameFunctions::ChessPiece* piece);
		void Init();
	};
}