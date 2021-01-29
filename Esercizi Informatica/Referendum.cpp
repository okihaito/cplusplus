//esercizio referendum
#include <iostream>
#include <string>

using namespace std;

int main()
{
 int voto,votosi,votono,votitotali,p,p1,p2,p3,p4;
 float percentualesi,percentualeno;
 votosi=0;
 votono=0;
 votitotali=0;
 p1=0;
 p2=0;
 p3=0;
 p4=0;
 do {
    cout << "Il dipendente ha votato: [0] - NO; [1] - Si; [9] - EXIT:" << endl; //menu
    cin >> voto; //inserisce il voto
    if(voto==0){ //se il voto e' no allora contalo
        votono++; //NO+1
    }
    if(voto==1){ //se il voto e' si allora contalo
        votosi++; //SI+1
        cout << "Quale partito ha votato?" << endl;
        cout << "[2] - Partito 1; [3] - Partito 2; [4] - Partito 3; [5] - Partito 4: " << endl;
        cin >> p;
        switch(p)
        {
        case 2:
            p1++;
            break;
        case 3:
            p2++;
            break;
        case 4:
            p3++;
            break;
        case 5:
            p4++;
            break;
        case 6:
            cout << "Numero non accettato." << endl;
            break;
        case 7:
            cout << "Numero non accettato." << endl;
            break;
        case 8:
            cout << "Numero non accettato." << endl;
            break;
        }
    }
    } while(voto !=9); //se il voto e' 9 (exit) allora stampa i risultati
        votitotali=votosi+votono; //voti totali
        cout << "Numero voti NO: " << votono << endl;
        cout << "Numero voti SI: " << votosi << endl;
        cout << "Numero voti partito 1: " << p1 << endl; //voti partito 1
        cout << "Numero voti partito 2: " << p2 << endl; //voti partito 2
        cout << "Numero voti partito 3: " << p3 << endl; //voti partito 3
        cout << "Numero voti partito 4: " << p4 << endl; //voti partito 3
        cout << "Numero totali: " << votitotali << endl; //voti partito 4
        percentualesi=100*votosi/votitotali; //trova la percentuale del si
        percentualeno=100*votono/votitotali; //trova la percentuale del no
        cout << "Percentuale dei SI: " << percentualesi << "%" << endl;
        cout << "Percentuale dei NO: " << percentualeno << "%" << endl;

return 0;
}
