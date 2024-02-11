#include "kerros.h"


Kerros::Kerros() {

    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot() {

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double HintaPerNelioPerAsukas) {

    double AsuntojenKulutus=as1.laskeKulutus(HintaPerNelioPerAsukas)+
                              as2.laskeKulutus(HintaPerNelioPerAsukas)+
                              as3.laskeKulutus(HintaPerNelioPerAsukas)+
                              as4.laskeKulutus(HintaPerNelioPerAsukas);
    return AsuntojenKulutus;
}
