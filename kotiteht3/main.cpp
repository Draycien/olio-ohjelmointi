#include <iostream>
#include <italianchef.h>
#include <chef.h>
using namespace std;

int main() {
    //Chef chefName("Jyrki");
    ItalianChef Italian("Mario", 100, 250);
    //chefName.makeSalad();
    Italian.makePasta();
    //chefName.makeSoup();

    return 0;
}
