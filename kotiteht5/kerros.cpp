#include "kerros.h"


Kerros::Kerros(bool inherited) : Katutaso::Katutaso(inherited) {

    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
    cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros() {

    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

void Kerros::maaritaAsunnot() {

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double HintaPerNelioPerAsukas) {

    double AsuntojenKulutus=as1->laskeKulutus(HintaPerNelioPerAsukas)+
                              as2->laskeKulutus(HintaPerNelioPerAsukas)+
                              as3->laskeKulutus(HintaPerNelioPerAsukas)+
                              as4->laskeKulutus(HintaPerNelioPerAsukas);
    return AsuntojenKulutus;
}
