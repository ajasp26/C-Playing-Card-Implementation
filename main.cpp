#include "card.h"
#include "deck.h"
#include <iostream>

int main()
{
    Deck deck;

    for (int i = 0; i < 55; ++i)
    {
        auto card = deck.draw();
        if (!card)
        {
            std::cout << "The deck is empty." << std::endl;
            break;
        }
        else
        {
            std::cout << *card << std::endl;
        }
    }

    // Re-shuffle and draw again for demonstration
    deck.shuffle();
    std::cout << "After reshuffling:" << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        auto card = deck.draw();
        if (!card)
        {
            std::cout << "The deck is empty." << std::endl;
            break;
        }
        else
        {
            std::cout << *card << std::endl;
        }
    }

    return 0;
}
