#include <iostream>
#include "Grid.h"

// struct Grid
// {
    // static const unsigned int gridSize = 3;
    // // static const char tokenX = 'x';
    // // static const char tokenO = 'o';
    // static const char defaultToken = '.';
    // char gridArray [gridSize][gridSize];
    //
    // Grid()
    // {
    // }
    //
    void Grid::setDefaultGrid()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                gridArray[i][j] = defaultToken;
            }
        }
    }

    char Grid::setTokenIntoGrid(unsigned int x, unsigned int y, char token)
    {
        gridArray[x][y] = token;
    }

    void Grid::showGridStatus()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                std::cout << "[" << gridArray[i][j] << "]";
            }
            std::cout << "" << std::endl;
        }
    }

    bool Grid::isFullGrid()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                if (gridArray[i][j] == defaultToken)
                {
                    return false;
                    break;
                }
                else 
                {
                    continue;
                }
            }
        }
        return true;
    }
// };
