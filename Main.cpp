#include <iostream>
#include "GameState.h"
#include "Rook.h"

int main()
{
	gameState::GameState game;
	gameFunctions::Rook r(0x011);

	game.GetBlack()[0] = r;

	r.PrintValidMoves();


	std::cout << game.GetBlack()[0].GetName() << ", " << game.GetBlack()[0].GetPosition() << ";" << ((game.GetBlack()[0].GetPosition() & 0xf0) >> 4) << ";" << (game.GetBlack()[0].GetPosition() & 0x0f) << std::endl;
}