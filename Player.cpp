#include "Player.h"

    Player::Player(char token) : token(token) {}
    // {
    //     this->token = token;
    // }

    char Player::getToken()
    {
        return token;
    }
