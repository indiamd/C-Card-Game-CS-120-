//
// Created by India Davis on 1/25/22.
//

#include "Game.h"
#include <iostream>
using namespace std;

Game::Game() {

}

//print rules to the game
void Game::printRules() {
    cout << "Welcome to the Higher or Lower card game" << endl;
    cout << "A random card will be displayed (no face cards)" << endl;
    cout << "The value of the card is determined by adding its number and its suit value" << endl;
    cout << "Hearts= 0 Diamonds= 10 Clubs= 20 Spades=30" << endl;
    cout << "You will guess whether the next card picked will be < or > the original card" << endl;
    cout << "If you are correct, you will earn a point, if not, the game ends" << endl << endl;
    cout << "Ready to play?" << endl << endl;
    char ready;
    cin >> ready;
    while (ready != 'y'){
        cout << "Now are you ready to play? (type y for yes)" << endl;
        cin >> ready;
    }
}

//validate guess to ensure it is either h or l
void Game::validateGuess(char guess) {
    while (guess != 'h' and guess != 'l') {
        cout << "invalid response. ";
        printOptions();
        cin >> guess;
    }
}

//inform the user of their input options
void Game::printOptions(){
        cout << "type 'h' for higher or 'l' for lower";
    }

//determine whether value2 is greater than value1
bool Game::compare(int val1, int val2) {
    if (val1>val2){
        return false;
    }
    else{
        return true;
    }
}





