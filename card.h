#ifndef CARD_H
#define CARD_H

#include <ostream>

enum class Suit
{
    Spades,
    Clubs,
    Diamonds,
    Hearts
};

enum class Rank
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
    Card(Suit suit, Rank rank);

    Suit getSuit() const;
    Rank getRank() const;

    bool sameSuit(const Card &other) const;
    bool sameRank(const Card &other) const;

    friend bool operator==(const Card &lhs, const Card &rhs);
    friend bool operator<(const Card &lhs, const Card &rhs);
    friend bool operator>(const Card &lhs, const Card &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Card &card);

private:
    Suit suit;
    Rank rank;
};

#endif // CARD_H
