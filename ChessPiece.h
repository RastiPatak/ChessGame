#pragma once
#include <string>

namespace gameFunctions
{
	class ChessPiece
	{
	protected:
		int m_position;		//e.g.: 0x0045 equals to D5
		bool m_isActive;
		std::string m_name;

	public:
		ChessPiece() : m_position(0x0), m_isActive(true) {}
		ChessPiece(int position) : m_position(position), m_isActive(true) {}

		virtual bool MovePiece(int& position) { return false; }
		virtual int* GetValidMoves();
		virtual void PrintValidMoves() {}

		const std::string& GetName() const { return m_name; }
		const bool GetActive() const { return m_isActive; }
		const int GetPosition() const { return m_position; }

		void ToggleActive() { m_isActive = !m_isActive; }
	};
}