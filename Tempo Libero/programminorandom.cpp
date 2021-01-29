/*-------------------------------------------------------------------------------------------------
                        Programmino Random...
                                        Giusto per perdere un po' di tempo.
                                                                        Aggiornato il 29/01/2021.
-------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    //sys
    const int sys=5;
    int i;
    //calc
   float a,b,e,esp,base;
   int t;
   long double risultato;

   //INIZIO
   a=0;
   b=0;
   i=0;
   //TABELLA MENU
   cout << "+-----------+" << endl <<  "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = +     |" << endl << "| 2 = -     |" << endl << "| 3 = *     |" << endl << "| 4 = /     |" << endl << "| 5 = sqrt  |" << endl << "| 6 = pow   |" << endl << "+-----------+" << endl;
   cout << "-------------------------------------------" << endl;
   cout << "Inserisci: ";
   cin >> t; //SELEZIONE

   //sistema
   switch(t)
   {
   case 1: //somma
     cout << "Inserisci due numeri (SOMMA):" << endl;
    cin >> a >> b;
    risultato=a+b;
    cout << "La somma e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
     }

   case 2: //differenza
    cout << "Inserisci due numeri (DIFFERENZA):" << endl;
    cin >> a >> b;
    risultato=a-b;
    cout << "La differenza e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
     }

   case 3: //moltiplicazione
    cout << "Inserisci due numeri (MOLTIPLICAZIONE):" << endl;
    cin >> a >> b;
    risultato=a*b;
    cout << "La moltiplicazione e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
     }

   case 4: //divisione
    cout << "Inserisci due numeri (DIVISIONE):" << endl;
    cin >> a >> b;
    risultato=a/b;
    cout << "La divisione e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
     }

   case 5: //radice quadrata
    cout << "Inserisci numero (RADICE QUADRATA):" << endl;
    cin >> a;
    risultato=sqrt(a);
    cout << "La radice quadrata di " << a << ":" << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
     if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
     }

   case 6: //base e esponente
    cout << "Inserisci numero (BASE):" << endl;
    cin >> base;
    cout << "Inserisci esponente:" << endl;
    cin >> esp;
    risultato=pow(base,esp);
    cout << "Il risultato e': " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
    }
   //case 7:

    return 0;
}}
