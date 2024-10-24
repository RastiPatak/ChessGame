#pragma once
#include "ChessPiece.h"

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
		virtual int* GetValidMoves() override;
		virtual void PrintValidMoves() override;
	};
}