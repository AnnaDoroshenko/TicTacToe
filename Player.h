#pragma once

struct Player
{
    char token;

    Player(char token)
    {
        this->token = token;
    }


    // Player(char token) : token(token){};
    char getToken();
};
