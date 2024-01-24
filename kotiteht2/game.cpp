#include "joo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int s) {
    setmaxNumber(s);
    setrandomNumber();
}

void Game::setmaxNumber(int s) {
    maxNumber = s;
    cout<<"GAME CONSTRUCTOR: Object Initialized with "<<maxNumber<<" as maximum value"<<endl;
}
void Game::setrandomNumber() {
    srand(time(0));
    do {
        randomNumber = rand() & maxNumber;
    }
    while (randomNumber == 0);
}
Game::~Game() {
    cout<<"Game Destructor: object cleared from stack memory"<<endl;
}

void Game::play() {
    do {
        cout<<"Arvaa luku valilla 1-"<<maxNumber<<": ";
        cin>>playerGuess;

        if (playerGuess < randomNumber) {
            cout<<"Luku on suurempi, yrita uudelleen."<<endl;
        }
        else if (playerGuess > randomNumber) {
            cout<<"Luku on pienempi, yrita uudelleen."<<endl;
        }
        numOfGuesses++;
    }
    while (playerGuess != randomNumber);
    return printGameResult();
}
void Game::printGameResult() {
    cout<<"Arvasit oikein, vastaus oli = "<<randomNumber<<". Arvauksia meni "<<numOfGuesses<<endl;
}
