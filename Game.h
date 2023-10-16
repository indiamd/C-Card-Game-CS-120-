//
// Created by India Davis on 1/25/22.
//

#ifndef M1OEP_LARGE_IDAVIS1_GAME_H
#define M1OEP_LARGE_IDAVIS1_GAME_H

#include "Card.h"

class Game {

public:

    //default constructor
    //creates a new game
    Game();

    //prints the rules of the game for the user
    //requires nothing
    //returns nothing
    void printRules();

    //validates the users guess to make sure either h or l was chosen
    //requires the users input guess
    //returns nothing, but while loop ensures h or l is chosen before the loop ends
    void validateGuess(char guess);

    //informs the user to pick 'h' or 'l' to make a guess
    //requires nothing
    //returns nothing
    void printOptions();

    //takes in 2 cards
    //determines which is higher in value
    //returns true if second card is higher and false if second card is lower
    bool compare(int val1, int val2);



};



#endif //M1OEP_LARGE_IDAVIS1_GAME_H
