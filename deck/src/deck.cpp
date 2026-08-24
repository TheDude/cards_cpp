#include <algorithm>

#include "deck.h"

std::ostream& operator<<(std::ostream& s, const Suit& suit){
    switch (suit){
        case Suit::Spades: return s << "♠️";
        case Suit::Hearts: return s << "❤️";
        case Suit::Diamonds: return s << "♦️";
        case Suit::Clubs: return s << "♣️";
    }
}

std::ostream& operator<<(std::ostream& s, const CardValue& value){
    switch (value){
        case CardValue::Ace: return s << "A";
        case CardValue::King: return s << "K";
        case CardValue::Queen: return s << "Q";
        case CardValue::Jack: return s << "J";
        case CardValue::Ten: return s << "10";
        case CardValue::Nine: return s << "9";
        case CardValue::Eight: return s << "8";
        case CardValue::Seven: return s << "7";
        case CardValue::Six: return s << "6";
        case CardValue::Five: return s << "5";
        case CardValue::Four: return s << "4";
        case CardValue::Three: return s << "3";
        case CardValue::Two: return s << "2";
    }
}

std::ostream& operator<<(std::ostream& s, const Card& card){
    return s << card.suit << card.value;
}


