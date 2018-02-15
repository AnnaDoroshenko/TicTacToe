#include <iostream>

struct Grid
{
    static const unsigned int gridSize = 3;
    // static const char tokenX = 'x';
    // static const char tokenO = 'o';
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

    char setTokenIntoGrid(unsigned int x, unsigned int y, char token)
    {
        gridArray[x][y] = token;
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

    Player(char token)
    {
        this->token = token;
    }

    char getToken()
    {
        return token;
    }
};

int main()
{
    const char tokenX = 'x';
    const char tokenO = 'o';
    
    unsigned int x;
    unsigned int y;

    Grid testGrid;
    testGrid.setDefaultGrid();
    testGrid.showGridStatus();
    
    Player testPlayer1(tokenX);
    Player testPlayer2(tokenO);
    const char firstPlayerToken = testPlayer1.getToken();
    const char secondPlayerToken = testPlayer2.getToken();
    std::cout << "First player input: " << std::endl;
    std::cin >> x;
    std::cin >> y;
    testGrid.setTokenIntoGrid(x, y, firstPlayerToken);
    testGrid.showGridStatus();
    std::cout << "Second player input: " << std::endl;
    std::cin >> x;
    std::cin >> y;
    testGrid.setTokenIntoGrid(x, y, secondPlayerToken);
    testGrid.showGridStatus();
    // std::cout << testGrid.isFullGrid() << std::endl;
}
