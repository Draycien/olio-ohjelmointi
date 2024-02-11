<<<<<<< HEAD:kotiteht4/kerros.h
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
=======
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
>>>>>>> 977defbe15248b88152261396ce9460daf8e40f5:kotiteht4/kotiteht4/kerros.h
