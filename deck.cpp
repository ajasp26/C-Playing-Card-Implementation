#include "deck.h"
#include <algorithm>
#include <iterator>
#include <random>

Deck::Deck()
{
    loadDeck();
    shuffle();
}

// loadDeck: Fills the deck with a standard set of 52 playing cards.
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

// shuffle: Randomizes the order of the cards in the deck.
void Deck::shuffle()
{
    std::shuffle(cards.begin(), cards.end(), generator);
}

// draw: Removes and returns the top card from the deck.
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
