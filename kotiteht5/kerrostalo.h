#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
public:

    Kerrostalo();
    virtual ~Kerrostalo();
    double laskeKulutus(double HintaPerNelioPerAsukas);

private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
    Kerros* neljas;
};

#endif // KERROSTALO_H
