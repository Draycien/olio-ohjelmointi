#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {

    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    neljas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double HintaPerNelioPerAsukas) {

    double KerrostalonKulutus=eka.laskeKulutus(HintaPerNelioPerAsukas)+
                                toka.laskeKulutus(HintaPerNelioPerAsukas)+
                                kolmas.laskeKulutus(HintaPerNelioPerAsukas)+
                                neljas.laskeKulutus(HintaPerNelioPerAsukas);
    cout<<"Kerrostalon kulutus, = "<<KerrostalonKulutus<<endl;
    return KerrostalonKulutus;
}
