<<<<<<< HEAD:kotiteht4/katutaso.cpp
#include "katutaso.h"

Katutaso::Katutaso() {

    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot() {

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    k1.maarita(2,100);
    k2.maarita(2,100);
}

double Katutaso::laskeKulutus(double HintaPerNelioPerAsukas)  {

    double KatutasonKulutus=k1.laskeKulutus(HintaPerNelioPerAsukas)+
                              k2.laskeKulutus(HintaPerNelioPerAsukas);
    //    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta on= "
    //         <<HintaPerNelioPerAsukas<<" on "<<KatutasonKulutus<<endl;
    return KatutasonKulutus;
}
=======
#include "katutaso.h"

Katutaso::Katutaso() {

    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot() {

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    k1.maarita(2,100);
    k2.maarita(2,100);
}

double Katutaso::laskeKulutus(double HintaPerNelioPerAsukas)  {

    double KatutasonKulutus=k1.laskeKulutus(HintaPerNelioPerAsukas)+
                              k2.laskeKulutus(HintaPerNelioPerAsukas);
    //    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta on= "
    //         <<HintaPerNelioPerAsukas<<" on "<<KatutasonKulutus<<endl;
    return KatutasonKulutus;
}
>>>>>>> 977defbe15248b88152261396ce9460daf8e40f5:kotiteht4/kotiteht4/katutaso.cpp
