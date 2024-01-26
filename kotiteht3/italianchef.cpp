#include "italianchef.h"

ItalianChef::ItalianChef(const string& getName, int vesimaara, int jauhomaara) : Chef(getName) {
    vesi=vesimaara;
    jauhot=jauhomaara;
    //cout<<""<<name<<" konstruktori"<<endl;
}
ItalianChef::~ItalianChef() {
    //cout<<""<<name<<" destruktori"<<endl;
}
string ItalianChef::getName() {
    return name;
}
void ItalianChef::makePasta() {
    //cout<<"Chef "<<name<<" makes pasta"<<endl;
    cout<<"Chef "<<name<<" makes pasta with a special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
}
