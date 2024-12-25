#include <stdio.h>

enum Suit {
    HEARTS, DIAMONDS, CLUBS, SPADES
};

enum Rank {
    TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
};

void printCard(enum Rank rank, enum Suit suit) {
    const char *rankNames[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "JACK", "QUEEN", "KING", "ACE"};
    const char *suitNames[] = {"HEARTS", "DIAMONDS", "CLUBS", "SPADES"};
    
    printf("%s of %s\n", rankNames[rank], suitNames[suit]);
}

int main() {
    for (int suit = HEARTS; suit <= SPADES; suit++) {
        for (int rank = TWO; rank <= ACE; rank++) {
            printCard(rank, suit);
        }
    }
    return 0;
}
