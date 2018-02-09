#include <iostream>

struct Grid
{
    static const unsigned int gridSize = 3;
    static const char tokenX = 'x';
    static const char tokenO = 'o';
    static char gridArray [gridSize][gridSize];

    Grid()
    {
        setDefaultGrid();
    }

    void setDefaultGrid()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                gridArray[i][j] = '.';
            }
        }
    }

    void showStatus()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                std::cout << "[" << gridArray[i][j] << "]" << std::endl;
            }
        }
    }

    bool isFullGrid()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                if ((gridArray[i][j] != tokenX) || (gridArray[i][j] != tokenO))
                {
                    break;
                }
                else 
                {
                    return true;
                }
            }
        }
        return false;
    }
};

struct Player
{
    static char token;

    Player()
    {
    }

    void setTokens(char token)
    {
        this->token = token;
    }
};

int main()
{

}
