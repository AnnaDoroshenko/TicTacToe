#ifndef GRID_H
#define GRID_H

struct Grid{
    Grid();

    static const unsigned int gridSize = 3;
    // static const char tokenX = 'x';
    // static const char tokenO = 'o';
    static const char defaultToken = '.';
    char gridArray [gridSize][gridSize];

    void setDefaultGrid();
    char setTokenIntoGrid(unsigned int x, unsigned int y, char token);
    void showGridStatus();
    bool isFullGrid();
};

#endif
