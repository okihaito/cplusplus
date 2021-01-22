//esercizio referendum
#include <iostream>
#include <string>

using namespace std;

int main()
{
 int voto,votosi,votono,votitotali;
 float percentualesi,percentualeno;
 votosi=0;
 votono=0;
 votitotali=0;
 do {
    cout << "Il dipendente ha votato: 0 - NO; 1 - Si; 9- EXIT:" << endl; //menu
    cin >> voto; //inserisce il voto
    if(voto==0){ //se il voto � no allora contalo
        votono++; //NO+1
    }
    if(voto==1){ //se il voto � si allora contalo
        votosi++; //SI+1
    }
    } while(voto !=9); //se il voto � 9 (exit) allora stampa i risultati
        votitotali=votosi+votono; //voti totali
        cout << "Numero voti NO: " << votono << endl;
        cout << "Numero voti SI: " << votosi << endl;
        cout << "Numero totali: " << votitotali << endl;
        percentualesi=100*votosi/votitotali; //trova la percentuale del si
        percentualeno=100*votono/votitotali; //trova la percentuale del no
        cout << "Percentuale dei SI: " << percentualesi << "%" << endl;
        cout << "Percentuale dei NO: " << percentualeno << "%" << endl;

return 0;
}
