#include <asunto.h>
#include <kerros.h>
#include <kerrostalo.h>
#include <katutaso.h>

using namespace std;

int main() {

    /*    Asunto asunto1;
    asunto1.maarita(2,100);
    asunto1.laskeKulutus(1);

    Kerros kerros1;
    Katutaso katutaso1;
    kerros1.maaritaAsunnot();
    katutaso1.maaritaAsunnot();
    double kerros1kulutus=kerros1.laskeKulutus(1);
    double katutaso1kulutus=katutaso1.laskeKulutus(1);

    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta on= "
         <<1<<" on "<<kerros1kulutus+katutaso1kulutus<<endl; ei varmaan enään toimi koska muuta koodia muutettu niin paljon.
*/

    Kerrostalo kerrostalo1;
    kerrostalo1.laskeKulutus(1);
    return 0;
}
