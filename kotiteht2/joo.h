#ifndef JOO_H
#define JOO_H

class Game {

public:

    Game(int s);
    ~Game();
    void play();
    void setmaxNumber(int s);
    void setrandomNumber();

private:

    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();

};

#endif // JOO_H
