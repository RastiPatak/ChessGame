#include "Rook.h"
#include <iostream>

bool gameFunctions::Rook::MovePiece(int& position)
{
    int* validMoves = GetValidMoves();
    for (int i = 0; i < 14; i++)
    {
        if (position == validMoves[i])
        {
            m_position = position;
            return true;
        }
    }
    return false;
}

int* gameFunctions::Rook::GetValidMoves()
{
    int valid[15];
    int subtractFirst = 1;
    int subtractSecond = 1;
    for (int i = 1; i < 9; i++)
    {
        if ((m_position & 0x0f) == i)
            subtractFirst++;
        else
            valid[i - subtractFirst] = (m_position & 0xf0) + i;
        if ((m_position & 0xf0) == i)
            subtractSecond++;
        else
            valid[(i - subtractSecond) + 7] = (m_position & 0x0f) + i * 0x10;
    }
    return valid;
}

void gameFunctions::Rook::PrintValidMoves()
{
    std::cout << "---Valid Moves---" << std::endl;
    int* validMoves = GetValidMoves();
    for (int i = 0; i < 14; i++)
    {
        if (i != 0)
            std::cout << ", ";
        std::cout << (validMoves[i] & 0xf0) << "|" << (validMoves[i] & 0x0f);
    }
    std::cout << std::endl;
}
