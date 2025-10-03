#include "PrecompiledHeader.hpp"
#include "GameOfLife.hpp"

USE_DEDICATED_GPU

int main()
{
    GameOfLife{"Conway's Game of Life"}.Play();
}
