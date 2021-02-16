/*-------------------------------------------------------------------------------------------------
                        Programmino Random...
                                        Giusto per perdere un po' di tempo.
                                                                        Aggiornato il 16/02/2021.
-------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <cmath>
#include <unistd.h>
using namespace std;

//FUNZIONI
float Somma(float a, float b);
float Differenza(float a, float b);
float Moltiplicazione(float a, float b);
float Divisione(float a, float b);
float Radice(float a);
float Esponente(float base, float esp);
float Cos(float grad);
float Sin(float grad);
float Tan(float grad);
int p2();

//PROGRAMMA
int main()
{
    //sys
    const int sys=5;
    int i;
    //calc
   float a,b,e,esp,base,grad;
   int t;

   //INIZIO
   a=0;
   b=0;
   i=0;
   //TABELLA MENU
   cout << "+---------------+" << endl <<  "|   Seleziona   |" << endl <<  "+---------------+" << endl <<  "| 1 = +         |" << endl << "| 2 = -         |" << endl << "| 3 = *         |" << endl << "| 4 = /         |" << endl << "| 5 = sqrt      |" << endl << "| 6 = pow       |" << endl << "| 7 = cos       |" << endl << "| 8 = sin       |" << endl << "| 9 = tan       |" << endl << "| 10 = Pag. 2   |" << endl << "+---------------+" << endl;
   cout << " " << endl;
   cout << "-------------------------------------------" << endl;
   cout << "Inserisci: ";
   cin >> t; //SELEZIONE

   //sistema
   switch(t)
   {
    //somma
   case 1:
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
                break;

    //differenza
   case 2:
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

    //moltiplicazione
   case 3:
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

    //divisione
   case 4:
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

    //radice quadrata
   case 5:
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

    //esponente
   case 6:
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

    //cos
    case 7:
        cout << "Inserisci il grado:" << endl;
        cin >> grad;
        sysf= Cos(grad); //CHIAMA LA FUNZIONE ESPONENTE
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
    //sin
    case 8:
        cout << "Inserisci il grado:" << endl;
        cin >> grad;
        sysf= Sin(grad); //CHIAMA LA FUNZIONE ESPONENTE
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
    //tan
    case 9:
        cout << "Inserisci il grado:" << endl;
        cin >> grad;
        sysf= Tan(grad); //CHIAMA LA FUNZIONE ESPONENTE
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
    //pagina successiva
    case 10:
        while(i<sys){
                system("CLS"); //pulisci 5 volte
                i++;
                }
    cout << "Caricamento..." << endl;
    cout << "--------------------------------------------------------------" << endl;
    sleep(3);
                while(i<sys){
                system("CLS"); //pulisci 5 volte
                i++;
                }
                return p2();

    //errore numero
    default:
        cout << "Numero non disponibile." << endl;
        sleep(2);
        while(i<sys){
                system("CLS"); //pulisci 5 volte
                i++;
                }
                return main();
   }}
/*
---------------------------------------------------------------------
                                PAGINA 2
---------------------------------------------------------------------
*/
int p2()
{
    //sys
    const int sys=5;
    int i;
    //calc
    float a,b,e,esp,base,grad;
    int t;

   //INIZIO
   a=0;
   b=0;
   i=0;

    cout << "+---------------+" << endl <<  "|   Seleziona   |" << endl <<  "+---------------+" << endl <<  "| 11 = WIP      |" << endl << "+---------------+" << endl;
    cout << " " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Inserisci: ";
    cin >> t; //SELEZIONE
    return 0;
}



/*
---------------------------------------------------------------------
                                FUNZIONI
---------------------------------------------------------------------
*/

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
float Cos(float grad) //FUNZIONE COS
{
    float s; //NUOVA VARIABILE
    s=cos(grad);
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Sin(float grad) //FUNZIONE SIN
{
    float s; //NUOVA VARIABILE
    s=sin(grad);
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
float Tan(float grad) //FUNZIONE TAN
{
    float s; //NUOVA VARIABILE
    s=tan(grad);
    return s; //RITORNA INDIETRO CON IL RISULTATO
}
