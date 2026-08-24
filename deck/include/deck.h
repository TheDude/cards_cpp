#pragma once

#include <string>
#include <vector>
#include <compare>
#include <random>
#include <ostream>

enum class Suit
{
    Spades,
    Hearts,
    Diamonds,
    Clubs
};

enum class CardValue
{
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace
};

class Card
{
public:

    constexpr Card(Suit suit, CardValue value): suit(suit), value(value){}
    bool operator==(const Card&) const = default;
    friend std::ostream& operator<<(std::ostream& s, const Suit& suit);
    friend std::ostream& operator<<(std::ostream& s, const CardValue& value);
    friend std::ostream& operator<<(std::ostream& s, const Card& card);

    Suit suit;
    CardValue value;
};

