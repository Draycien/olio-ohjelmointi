#include "asunto.h"

Asunto::Asunto() {

    cout<<"Asunto luotu"<<endl;
}

void Asunto::maarita(int asukkaita, int neliota) {

    asukasMaara=asukkaita;
    neliot=neliota;
    cout<<"Asunto maaritetty asukkaita= "<<asukkaita<<" nelioita= "<<neliota<<endl;
}

double Asunto::laskeKulutus(double HintaPerNelioPerAsukas)  {

    double kulutus=asukasMaara*neliot*HintaPerNelioPerAsukas;
    //    cout<<"Asunnon kulutus, kun hinta on= "<<HintaPerNelioPerAsukas<<" on "<<kulutus<<endl;
    return kulutus;
}
