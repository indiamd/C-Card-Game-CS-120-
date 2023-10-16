//
// Created by India Davis on 1/25/22.
//
#include "Card.h"
#include "Game.h"
#include "iostream"

using namespace std;

int main(){

//declare fields
int points= 0;
bool winning= true;
int value1;
int value2;
char guess;

//create game
Game game;
//declare first card
Card firstCard;
//declare second card
Card secondCard;

//print rules
game.printRules();

//get first card
firstCard = Card(firstCard.getRandNum(), firstCard.getRandSuit());


    //print first card
    cout << "Your starting card is the " << firstCard.num << " of " << firstCard.suit << endl;

    //determine first card value
    value1 = firstCard.getCardValue(firstCard);
    cout << "Its value is " << value1 << endl;


//while status of game is winning (winning=true) continue game
while (winning == true) {

    //prompt user to enter their guess: either 'h' for higher or 'l' for lower
    game.printOptions();
    cin >> guess;

    //validate if guess is either 'h' or 'l'
    game.validateGuess(guess);

    //get second card
    secondCard= Card(secondCard.getRandNum(), secondCard.getRandSuit());
    //determine value of second card
    value2 = secondCard.getCardValue(secondCard);

    //determine if second card is higher or lower
    //make sure cards don't have same value
    while (firstCard == secondCard){
        secondCard= Card(secondCard.getRandNum(), secondCard.getRandSuit());
        value2 = secondCard.getCardValue(secondCard);
    }

    //print second card value
    cout << endl << "Your next card is the " << secondCard.num << " of " << secondCard.suit << endl;
    cout << "Its value is " << value2 << endl;


    //compare card values
    //if guess is higher and second card is higher
    if (guess == 'h' && firstCard < secondCard){
        //player was correct, add a point
        ++points;
        cout << endl << "Good guess. You have " << points << " points" << endl;
    }
    //if guess is lower and second card is lower
    else if (guess == 'l' && firstCard > secondCard){
        //player was correct, add a point
        ++points;
        cout << "Good guess. You have " << points << " points" << endl;
    }
    //player was incorrect, exit while loop, game is over
    else{
        winning= false;
    }

    //make secondCard become firstCard for next comparison
    firstCard = secondCard;
    value1 = firstCard.getCardValue(firstCard);
}

//winning status is not true, so end game
cout << "Sorry, Game Over!" << endl << "Your final score is " << points;

return 0;

};
