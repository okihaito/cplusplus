/*-------------------------------------------------------------------------------------------------
                        Programmino Random...
                                        Giusto per perdere un po' di tempo.
                                                                        Aggiornato il 07/02/2021.
-------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//FUNZIONI
float Somma(float a, float b);
float Differenza(float a, float b);
float Moltiplicazione(float a, float b);
float Divisione(float a, float b);
float Radice(float a);
float Esponente(float base, float esp);

int main()
{
    //sys
    const int sys=5;
    int i;
    //calc
   float a,b,e,esp,base;
   int t;

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
       float sysf; //PER LA FUNZIONE
       cout << "Inserisci due numeri (SOMMA):" << endl;
       cin >> a >> b;
        sysf= Somma(a,b); //CHIAMA LA FUNZIONE SOMMA
        cout << "Il risultato e': " << sysf << endl;
        cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl; //MENU
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
    sysf= Differenza(a,b); //CHIAMA LA FUNZIONE DIFFERENZA
    cout << "La differenza e: " << sysf << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl; //MENU
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
    sysf= Moltiplicazione(a,b); //CHIAMA LA FUNZIONE MOLTIPLICAZIONE
    cout << "La moltiplicazione e: " << sysf << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl; //MENU
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
    sysf = Divisione(a,b); //CHIAMA LA FUNZIONE DIVISIONE 
    cout << "La divisione e: " << sysf << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl; //MENU
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
    sysf= Radice(a); //CHIAMA LA FUNZIONE RADICE
    cout << "La radice quadrata di " << a << " : " << sysf << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl; //MENU
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
    sysf= Esponente(base,esp); //CHIAMA LA FUNZIONE ESPONENTE
    cout << "Il risultato e': " << sysf << endl;
    cout << "+-----------+" << endl << "| Seleziona |" << endl <<  "+-----------+" << endl <<  "| 1 = ESCI  |" << endl <<  "+-----------+" << endl; //MENU
    cin >> e;
    if(e==1){ //esci
        while(i<sys){
        system("CLS"); //pulisci 5 volte
        i++;
        }
        return main();
    }
    return 0; 
    }}

float Somma(float a,float b) //FUNZIONE SOMMA
{
    float s; //NUOVA VARIABILE
    s=a+b;
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Differenza(float a,float b) //FUNZIONE SOTTRAZIONE 
{
    float s; //NUOVA VARIABILE
    s=a-b;
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Moltiplicazione(float a,float b) //FUNZIONE MOLTIPLICAZIONE
{
    float s; //NUOVA VARIABILE
    s=a*b;
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Divisione(float a,float b) //FUNZIONE DIVISIONE
{
    float s; //NUOVA VARIABILE
    s=a/b;
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Radice(float a) //FUNZIONE RADICE QUADRATA
{
    float s; //NUOVA VARIABILE
    s=sqrt(a);
    if(a<0){ //SE IL NUMERO INSERITO E' NEGATIVO ALLORA E' IMPOSSIBILE
        cout << "Errore: Il numero e' negativo!" << endl;
        return 0; //RISULTATO 0
    }
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Esponente(float base, float esp) //FUNZIONE ESPONENTE
{
    float s; //NUOVA VARIABILE
    s=pow(base,esp);
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
