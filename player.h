#ifndef PLAYER_H
#define PLAYER_H
#include<string>

class Player
{
private:
    char recentMove;
    int numMoves;
    Player* Player_arr;

public:
    Player();
    virtual void Move();
    virtual std::string getMoves();
    char getMove();
    bool win(Player* opponent);
    ~Player();

};

#endif
