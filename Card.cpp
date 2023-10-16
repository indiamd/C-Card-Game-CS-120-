//
// Created by India Davis on 1/25/22.
//

#include "Card.h"
#include<cstdlib>

//default constructor
Card::Card(){
    suit= "Hearts";
    num= 1;
}

//constructor gives random value 1-10 to num and random suit
Card::Card(int Num, string Suit){
    suit= Suit;
    num= Num;
}

//gets random number for card
int Card::getRandNum(){
    srand((unsigned) time(NULL));
    int num= 1+(rand()%10);
    return num;
}


//gets random number to be associated with string suit name
string Card::getRandSuit() {
    string suitName;
    srand((unsigned) time(NULL));
    int randNum= 1+(rand()%4);
    if (randNum==1){
        suitName="Spades";
    }
    else if (randNum==2){
        suitName="Clubs";
    }
    else if (randNum==3){
        suitName="Diamonds";
    }
    else{
        suitName="Hearts";
    }
    return suitName;
}


//use enum to determine total value of card
int Card::getCardValue(Card card) {

    int totalVal;
    suitVal s;

    if (card.suit == "Hearts") {
        s= Hearts;
    }
    else if (card.suit == "Diamonds"){
        s= Diamonds;
    }
    else if (card.suit == "Clubs"){
        s= Clubs;
    }
    else{
        s= Spades;
    }

    totalVal= s + card.num;
    return totalVal;
}

bool Card::operator> (Card& card2){
    if (this->getCardValue(*this) >= card2.getCardValue(card2)){
        return true;
    }
        return false;
}

bool Card::operator< (Card& card2){
    if (this->getCardValue(*this) <= card2.getCardValue(card2)){
        return true;
    }
    return false;
}

bool Card::operator==(Card& card2) {
    if (this->getCardValue(*this) == card2.getCardValue(card2)){
        return true;
    }
    return false;
}

bool Card::operator!=(Card &card2) {
    if (this->getCardValue(*this) != card2.getCardValue(card2)){
        return true;
    }
    return false;
}
