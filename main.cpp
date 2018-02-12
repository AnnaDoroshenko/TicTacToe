#include <iostream>

struct Grid
{
    static const unsigned int gridSize = 3;
    static const char tokenX = 'x';
    static const char tokenO = 'o';
    static const char defaultToken = '.';
    char gridArray [gridSize][gridSize];

    Grid()
    {
    }

    void setDefaultGrid()
    {
        for (unsigned int i = 0; i < gridSize; i++)
        {
            for (unsigned int j = 0; j < gridSize; j++)
            {
                gridArray[i][j] = defaultToken;
            }
        }
    }

    void showGridStatus()
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

    bool isFullGrid()
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
};

struct Player
{
    char token;

    Player()
    {
    }

    void setToken(char token)
    {
        this->token = token;
        std::cout << "For checking " << this->token << std::endl;
    }

    void setPositionOfToken(unsigned int x, unsigned int y)
    {
        grid[x][y] = token; // Look about references!!!
    }
};

int main()
{
    unsigned int x;
    unsigned int y;

    Grid testGrid;
    testGrid.setDefaultGrid();
    testGrid.showGridStatus();
    // std::cout << testGrid.isFullGrid() << std::endl;

    Player testPlayer;
    testPlayer.setToken('x');
    std::cout << "Check input" << std::endl;
    std::cin >> x;
    std::cin >> y;
    testPlayer.setPositionOfToken(x, y);
    testGrid.showGridStatus();
}
