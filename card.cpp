#include "card.h"

// Constructor to initialize a card with a suit and value
Card::Card(Suit suit, Rank rank) : suit(suit), rank(rank) {}

Suit Card::getSuit() const
{
    return suit;
}

Rank Card::getRank() const
{
    return rank;
}

// Function to check for same suit
bool Card::sameSuit(const Card &other) const
{
    return suit == other.suit;
}

// Function to check for same value
bool Card::sameRank(const Card &other) const
{
    return rank == other.rank;
}

// Overloading the '==' operator to compare if two cards are same value
bool operator==(const Card &lhs, const Card &rhs)
{
    return lhs.rank == rhs.rank;
}

// Overloading the '<' operator to compare the values of two cards.
bool operator<(const Card &lhs, const Card &rhs)
{
    return lhs.rank < rhs.rank;
}

// Overloading the '>' operator to compare the values of two cards.
bool operator>(const Card &lhs, const Card &rhs)
{
    return lhs.rank > rhs.rank;
}

// Overloading the '<<' operator for easy printing of Card objects.
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
