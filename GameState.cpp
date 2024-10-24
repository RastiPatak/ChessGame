#include "GameState.h"

void gameState::GameState::SetWhitePiece(int& index, gameFunctions::ChessPiece& piece)
{
	bool side = 0;
	SetPiece(side, index, piece);
}

void gameState::GameState::SetBlackPiece(int& index, gameFunctions::ChessPiece& piece)
{
	bool side = 1;
	SetPiece(side, index, piece);
}

void gameState::GameState::SetPiece(bool& side, int& index, gameFunctions::ChessPiece& piece)
{
	if (side == 0)
	{
		whitePieces[index] = piece;
		return;
	}
	if (side != 0)
	{
		blackPieces[index] = piece;
	}
}

void gameState::GameState::Init()
{
	for (int i = 0; i < 16; i++)
	{
		gameFunctions::ChessPiece p(0x0);
		whitePieces[i] = p;
		blackPieces[i] = p;
	}
}
