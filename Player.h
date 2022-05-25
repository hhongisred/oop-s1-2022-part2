#include<iostream>
using namespace std;

//This file to identify the function of player: choose own pokemon and enemy pokemon also the player can check the pokemon's skill.
class Player{
    
public: //this could be protected maybe
    string name;  // the players chosen name to be entered
    int ID;      // the users unique ID 
    
    Player(int choice);  // The players ab
    Player(int enemychoice);
    int pick_Pokemon();
    std::string check_game();//check pokemon's skill
    void exit_game(); // function that when called, ends the game
    
};