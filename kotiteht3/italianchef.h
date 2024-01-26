#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <chef.h>


class ItalianChef : public Chef {

public:
    ItalianChef(const string& getName, int, int );
    ~ItalianChef();
    void makePasta();
    string getName();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
