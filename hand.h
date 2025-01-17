#include "card.h"

class Hand{
    Card* firstCard;
    Card* lastCard; 
    int numCardsInHand;
    public:
        Hand();
        Hand(Card*, Card*, int);
        Hand(const Hand&);

        Card* getFirstCard() const;
        Card* getLastCard() const;
        int getNumCardsInHand() const;

        void setFirstCard(Card*);
        void setLastCard(Card*);
        //no set num cards bc incremented in 
        void addCardToHand(Card);
        void deleteCardFromHand(Card);

        ~Hand();
        Hand* operator=(const Hand&);
};

//going to need
//player hand
//computer hand
//availible hand
//discard hand - last card in discard hand is the card being played against