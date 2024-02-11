#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include "katutaso.h"

using namespace std;

class Kerros : public Katutaso {
public:

    Kerros();
    //    Asunto as3;
    //    Asunto as4;
    void maaritaAsunnot() override;
    double laskeKulutus(double HintaPerNelioPerAsukas);

private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

#endif // KERROS_H
