#include "deck.h"
#include <algorithm>
#include <iterator>
#include <random>

Deck::Deck()
{
    loadDeck();
    shuffle();
}

void Deck::loadDeck()
{
    cards.clear();
    for (int suit = static_cast<int>(Suit::Spades); suit <= static_cast<int>(Suit::Hearts); ++suit)
    {
        for (int rank = static_cast<int>(Rank::Two); rank <= static_cast<int>(Rank::Ace); ++rank)
        {
            cards.push_back(std::make_shared<Card>(static_cast<Suit>(suit), static_cast<Rank>(rank)));
        }
    }
}

void Deck::shuffle()
{
    std::shuffle(cards.begin(), cards.end(), generator);
}

std::shared_ptr<Card> Deck::draw()
{
    if (cards.empty())
    {
        return nullptr;
    }

    auto card = cards.back();
    cards.pop_back();
    return card;
}
