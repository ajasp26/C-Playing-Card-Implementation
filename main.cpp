#include <iostream>
#include <random>
#include "card.h"
#include "deck.h"
int main()
{
    auto c1 = Card(Suit::Spade, Value::Two);
    auto c2 = Card(Suit::Heart, Value::Two);
    auto c3 = Card(Suit::Diamond, Value::King);
    auto c4 = Card(Suit::Club, Value::Queen);
    auto c5 = Card(Suit::Spade, Value::Ace);
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;
    std::cout << c4 << std::endl;
    std::cout << c5 << std::endl;
    std::cout << c1 << " is same suit as " << c5 << ": " << c1.sameSuit(c5) << std::endl;
    std::cout << c1 << " is same suit as " << c2 << ": " << c1.sameSuit(c2) << std::endl;
    std::cout << c1 << " is equal value as " << c2 << ": " << (c1 == c2) << std::endl;
    std::cout << c3 << " is greater than " << c1 << ": " << (c3 > c1) << std::endl;
    std::cout << c1 << " is greater than " << c3 << ": " << (c1 > c3) << std::endl;
    std::cout << c1 << " is less than " << c5 << ": " << (c1 < c5) << std::endl;
    std::cout << c5 << " is less than " << c1 << ": " << (c5 < c1) << std::endl;
    
    std::random_device rd;
    auto gen = std::default_random_engine{rd()};
    auto deck = Deck{gen};
    for (int i = 0; i < 55; ++i) {
        Card* card = deck.draw();
        if (card == nullptr) {
            std::cout << "The deck is empty.\n";
            break;
        } else {
            std::cout << *card << '\n';
        }
    }
    deck.reshuffle();
    
    for (int i = 0; i < 10; ++i) {
        Card* card = deck.draw();
        if (card == nullptr) {
            std::cout << "The deck is empty.\n";
            break;
        } else {
            std::cout << *card << '\n';
        }
    }
    deck.reshuffle();
    
    for (int i = 0; i < 55; ++i) {
        Card* card = deck.draw();
        if (card == nullptr) {
            std::cout << "The deck is empty.\n";
            break;
        } else {
            std::cout << *card << '\n';
        }
    }
    deck.reshuffle();
}
