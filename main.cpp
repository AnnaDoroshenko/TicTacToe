#include <iostream>
#include "Grid.h"
#include "Player.h"

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
