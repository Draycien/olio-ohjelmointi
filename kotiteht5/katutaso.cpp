#include "katutaso.h"

Katutaso::Katutaso() {

    k1 = new Asunto();
    k2 = new Asunto();
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::Katutaso(bool inherited) {

    k1 = nullptr;
    k2 = nullptr;
}

Katutaso::~Katutaso() {

    if (k1)delete k1;
    if (k2)delete k2;
}

void Katutaso::maaritaAsunnot() {

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    k1->maarita(2,100);
    k2->maarita(2,100);
}

double Katutaso::laskeKulutus(double HintaPerNelioPerAsukas)  {

    double KatutasonKulutus=k1->laskeKulutus(HintaPerNelioPerAsukas)+
                              k2->laskeKulutus(HintaPerNelioPerAsukas);
    //    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta on= "
    //         <<HintaPerNelioPerAsukas<<" on "<<KatutasonKulutus<<endl;
    return KatutasonKulutus;
}
