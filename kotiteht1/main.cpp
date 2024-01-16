#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {

    srand(time(0));

    int Luku = rand() % maxnum + 1;

    int Arvaus;

    int ArvaustenMaara = 0;

    do {
        cout<<"Arvaa luku valilla 1-"<<maxnum<<": ";
        cin>>Arvaus;

        if (Arvaus < Luku) {
            cout<<"Luku on suurempi, yrita uudelleen."<<endl;
        }
        else if (Arvaus > Luku) {
            cout<<"Luku on pienempi, yrita uudeleen."<<endl;
        }
        ArvaustenMaara++;
    }
    while (Arvaus != Luku);

    return ArvaustenMaara;
}

int main() {
    int ArvaustenMaara = game(40);

    cout<<"Oikea vastaus, arvausten maara: "<<ArvaustenMaara<<endl;

    return 0;
}
