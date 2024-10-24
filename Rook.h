#pragma once
#include "ChessPiece.h"
#include <iostream>
#include <vector>

namespace gameFunctions
{
	class Rook : public ChessPiece
	{
	public:
		Rook(int position) : ChessPiece(position)
		{
			m_name = "Rook";
		}

		virtual bool MovePiece(int& position) override;
		virtual std::vector<int> GetValidMoves() override;
		virtual void PrintValidMoves() override;
	};
}