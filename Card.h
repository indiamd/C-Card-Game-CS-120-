//
// Created by India Davis on 1/25/22.
//

#ifndef M1OEP_LARGE_IDAVIS1_CARD_H
#define M1OEP_LARGE_IDAVIS1_CARD_H
#include <string>
using namespace std;


struct Card {

    enum suitVal {Hearts= 0, Diamonds= 10, Clubs= 20, Spades= 30};
    string suit;
    int num;

    //default constructor
    Card();

    //constructor
    //takes an int number and a string suit
    //generates random card with values
    Card(int Num, string Suit);

    //randomly selects number 1-4 and designated suit based on the number
    //to be used for constructor
    string getRandSuit();

    //randomly gets a number to be used for card value
    //to be used for constructor
    int getRandNum();


    //gets total value of card (suit value + number value)
    //takes in card
    //returns int total value of card
    int getCardValue(Card card);

    bool operator> (Card& card2);
    bool operator< (Card& card2);
    bool operator == (Card& card2);
    bool operator != (Card& card2);

};


#endif //M1OEP_LARGE_IDAVIS1_CARD_H

