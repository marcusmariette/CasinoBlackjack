#include "../Headers/Card.h"

Card::Card(int value, std::string name, std::string suit) {
    cardName = name;
    cardSuit = suit;

    if (faceValue > 10) {
        faceValue = 10;
    } else {
        faceValue = value;
    }
}

int Card::value() const {
    return faceValue;
}

std::string Card::name() const {
    return cardName + " of " + cardSuit;
}