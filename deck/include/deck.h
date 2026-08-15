#include <string>
#include <vector>

class Card
{
public:
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

    Suit suit;
    CardValue value;
};

class deck
{
    public:
    std::vector<Card> cards;
    
};