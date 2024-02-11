#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

using namespace std;

class Katutaso {
public:

    Katutaso();
    //    Asunto as1;
    //    Asunto as2;
    virtual void maaritaAsunnot();
    double laskeKulutus(double HintaPerNelioPerAsukas);

private:
    Asunto k1;
    Asunto k2;
};

#ENDIF // KATUTASO_H
