#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {

    eka = new Katutaso();
    toka = new Kerros(true);
    kolmas = new Kerros(true);
    neljas = new Kerros(true);
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
    neljas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo() {

    delete eka;
    delete toka;
    delete kolmas;
    delete neljas;
}

double Kerrostalo::laskeKulutus(double HintaPerNelioPerAsukas) {

    double KerrostalonKulutus=eka->laskeKulutus(HintaPerNelioPerAsukas)+
                                toka->laskeKulutus(HintaPerNelioPerAsukas)+
                                kolmas->laskeKulutus(HintaPerNelioPerAsukas)+
                                neljas->laskeKulutus(HintaPerNelioPerAsukas);
    cout<<"Kerrostalon kulutus, = "<<KerrostalonKulutus<<endl;
    return KerrostalonKulutus;
}
