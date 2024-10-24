#include "Rook.h"

bool gameFunctions::Rook::MovePiece(int& position)
{
    std::vector<int> validMoves = GetValidMoves();
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

std::vector<int> gameFunctions::Rook::GetValidMoves()
{
    std::vector<int> valid(14);
    int subtractFirst = 1;
    int subtractSecond = 1;
    for (int i = 1; i < 9; i++)
    {
        if ((m_position & 0x0f) == i)
            subtractFirst++;
        else
            valid[i - subtractFirst] = (m_position & 0xf0) + i;
        if (((m_position & 0xf0) >> 4) == i)
            subtractSecond++;
        else
            valid[(i - subtractSecond) + 7] = (m_position & 0x0f) + i * 0x10;
    }
    return valid;
}

void gameFunctions::Rook::PrintValidMoves()
{
    std::cout << "---Valid Moves---" << std::endl;
    std::vector<int> validMoves = GetValidMoves();
    for (int i = 0; i < 14; i++)
    {
        if (i != 0)
            std::cout << ", ";
        std::cout << ((validMoves[i] & 0xf0) >> 4) << "|" << (validMoves[i] & 0x0f);
    }
    std::cout << std::endl;
}
