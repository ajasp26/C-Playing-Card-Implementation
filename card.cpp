#include "card.h"

Card::Card(Suit suit, Rank rank) : suit(suit), rank(rank) {}

Suit Card::getSuit() const
{
    return suit;
}

Rank Card::getRank() const
{
    return rank;
}

bool Card::sameSuit(const Card &other) const
{
    return suit == other.suit;
}

bool Card::sameRank(const Card &other) const
{
    return rank == other.rank;
}

bool operator==(const Card &lhs, const Card &rhs)
{
    return lhs.rank == rhs.rank;
}

bool operator<(const Card &lhs, const Card &rhs)
{
    return lhs.rank < rhs.rank;
}

bool operator>(const Card &lhs, const Card &rhs)
{
    return lhs.rank > rhs.rank;
}

std::ostream &operator<<(std::ostream &os, const Card &card)
{
    static const char *rankNames[] = {
        "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King", "Ace"};
    static const char *suitNames[] = {
        "Spades", "Clubs", "Diamonds", "Hearts"};

    os << rankNames[static_cast<int>(card.rank)] << " of " << suitNames[static_cast<int>(card.suit)];
    return os;
}
