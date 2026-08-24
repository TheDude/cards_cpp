#include <gtest/gtest.h>
#include <sstream>
#include "deck.h"

TEST(DeckTest, CardTest) {
    Card card(Suit::Spades, CardValue::Two);
    std::stringstream s;
    s << card;
    ASSERT_EQ(s.str(), "♠️2");
}