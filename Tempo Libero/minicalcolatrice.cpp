#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   float a,b,t,e;
   long double risultato;

   //INIZIO
   a=0;
   b=0;
   //TABELLA MENU
   cout << "+-----------+" << endl <<  "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = +     |" << endl << "| 2 = -     |" << endl << "| 3 = *     |" << endl << "| 4 = /     |" << endl << "| 5 = Rad   |" << endl << "+-----------+" << endl;
   cout << "-------------------------------------------" << endl;
   cout << "Inserisci: ";
   cin >> t; //SELEZIONE

   if(t==1){ //SOMMA
    cout << "Inserisci due numeri (SOMMA):" << endl;
    cin >> a >> b;
    risultato=a+b;
    cout << "La somma e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    if(e==1){
        return main();
    }
   }

   if(t==2){ //DIFFERENZA
    cout << "Inserisci due numeri (DIFFERENZA):" << endl;
    cin >> a >> b;
    risultato=a-b;
    cout << "La differenza e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    }
    if(e==1){
        return main();
   }

    if(t==3){ //MOLTIPLICAZIONE
    cout << "Inserisci due numeri (MOLTIPLICAZIONE):" << endl;
    cin >> a >> b;
    risultato=a*b;
    cout << "La moltiplicazione e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    }
    if(e==1){
        return main();

    if(t==4){ //DIVISIONE
    cout << "Inserisci due numeri (DIVISIONE):" << endl;
    cin >> a >> b;
    risultato=a/b;
    cout << "La divisione e: " << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    }
    if(e==1){
        return main();

    if(t==5){ //RADICE QUADRATA (NON FUNZIONA PER ORA.)
    cout << "Inserisci numero (RADICE QUADRATA):" << endl;
    cin >> a;
    risultato=sqrt(a);
    cout << "La radice quadrata di" << a << ":" << risultato << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl;
    cin >> e;
    }
    if(e==1){
        return main();
    }
    return 0;
}}  }
