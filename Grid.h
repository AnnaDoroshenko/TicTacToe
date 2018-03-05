#pragma once

struct Grid{
    static const unsigned int gridSize = 3;
    // static const char tokenX = 'x';
    // static const char tokenO = 'o';
    static const char defaultToken = '.';
    char gridArray [gridSize][gridSize];

    Grid()  {};
    void setDefaultGrid();
    char setTokenIntoGrid(unsigned int x, unsigned int y, char token);
    void showGridStatus();
    bool isFullGrid();
};
