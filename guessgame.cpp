#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void) {

    srand (time(NULL));
    int iGuess, uGuess;
    iGuess = rand() % 100 + 1;
    int guessCount;

    printf("Im thinking of a number between 1 and 100...");

    do {
        cout << "What is your guess, human: ";
        cin >> uGuess;
            if ( uGuess < iGuess) {
            printf("Higher... \n");
        } else if (uGuess > iGuess) {
            printf("Lower... \n");
            } 
            
        guessCount ++;

        if (guessCount == 5) {
            printf("Keep trying\n");
        } else if (guessCount == 10) {
            printf("You're not very good at this...\n");
        }
    } while (iGuess != uGuess);

        cout << "You have beaten me.. The number I was thinking is " << iGuess << ". Took you " << guessCount << " tries.";
        return 0;
}