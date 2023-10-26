#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <random>
#include <memory>

class Deck
{
public:
    Deck();

    void shuffle();
    std::shared_ptr<Card> draw();

private:
    std::vector<std::shared_ptr<Card>> cards;
    std::default_random_engine generator;

    void loadDeck();
};

#endif // DECK_H
