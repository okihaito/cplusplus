/*-------------------------------------------------------------------------------------------------
                        Programmino Random...
                                        Giusto per perdere un po' di tempo.
                                                                        Aggiornato il 25/02/2021.
-------------------------------------------------------------------------------------------------*/
//Funziona SOLO su Windows.

/*
---------------------------------------------------------------------
                                LIBRERIE
---------------------------------------------------------------------
*/
    #include <iostream>
    #include <string>
    #include <conio.h>
    #include <cmath>
    #include <unistd.h>
    #include <cstdlib>
    #include <windows.h>
    using namespace std;
/*
---------------------------------------------------------------------
                          RIFERIMENTO FUNZIONI
---------------------------------------------------------------------
*/
    void Linea();
    void Logo();
    int Exit();
    int Colore();
    float Somma(float a, float b);
    float Differenza(float a, float b);
    float Moltiplicazione(float a, float b);
    float Divisione(float a, float b);
    float Radice(float a);
    float Esponente(float base, float esp);
    float Cos(float grad);
    float Sin(float grad);
    float Tan(float grad);
    double p2();
    double pagtri();
    double Opzioni();
/*
---------------------------------------------------------------------
                            INIZIO PROGRAMMA
---------------------------------------------------------------------
*/
        int main()
        {
        char key;
        int Color;
        const int sys=5;
        int i;
        //calc
        float a,b,e;

   //INIZIO VARIABILI
        a=0;
        b=0;
        i=0;
/*
---------------------------------------------------------------------
                                MENU
---------------------------------------------------------------------
*/
        Logo();
        cout << "" << endl;
        cout << "1) Somma" << endl;
        cout << "2) Sottrazione" << endl;
        cout << "3) Moltiplicazione" << endl;
        cout << "4) Divisione" << endl;
        cout << "5) Radice quadrata di un numero" << endl;
        cout << "" << endl;
        cout << "X) Vai nella Pagina 2" << endl;
        cout << "Y) Opzioni" << endl;
        cout << "Z) Esci dal programma" << endl;
        cout << "" << endl;
        cout << "Inserisci: ";
        key = getch();
        key = toupper(key);

   //SCELTA
        switch(key)
        {
/*
---------------------------------------------------------------------
                            PAGINA SOMMA
---------------------------------------------------------------------
*/
        case '1':
            system("CLS");
            Logo();
            cout << "" << endl;
            float sysf; //PER LA FUNZIONE
            cout << "Inserisci due numeri (SOMMA):" << endl;
            cin >> a;
            cout << "+" << endl;
            cin >> b;
            sysf= Somma(a,b); //CHIAMA LA FUNZIONE SOMMA
            cout << "Il risultato e': " << sysf << endl;
            cout << "" << endl;
            Linea();
            cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
            key = getch();
            key = toupper(key);
                switch(key){
                    case 'O': //esci
                    while(i<sys){
                    system("CLS"); //pulisci 5 volte
                    i++;
                    }
                    return main();
                    break;
                    case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                        if (key=='Y'){
                            cout << "Sto per chiudere il programma..." << endl;
                            sleep(2);
                            cout << "Attendere..." << endl;
                            sleep(2);
                            return 0;
                            }
                        if (key=='N'){
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
                        else
                            cout << '\a';
                            cout << "Errore: Carattere non consentito." << endl;
                            sleep(2);
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
/*
---------------------------------------------------------------------
                        PAGINA SOTTRAZIONE
---------------------------------------------------------------------
*/
        case '2':
            system("CLS");
            Logo();
            cout << "" << endl;
            cout << "Inserisci due numeri (DIFFERENZA):" << endl;
            cin >> a;
            cout << "-" << endl;
            cin >> b;
            sysf= Differenza(a,b); //CHIAMA LA FUNZIONE DIFFERENZA
            cout << "La differenza e': " << sysf << endl;
            cout << "" << endl;
            Linea();
            cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
            key = getch();
            key = toupper(key);
                switch(key){
                    case 'O': //esci
                    while(i<sys){
                    system("CLS"); //pulisci 5 volte
                    i++;
                    }
                    return main();
                    break;
                    case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                        if (key=='Y'){
                            cout << "Sto per chiudere il programma..." << endl;
                            sleep(2);
                            cout << "Attendere..." << endl;
                            sleep(2);
                            return 0;
                            }
                        if (key=='N'){
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
                        else
                            cout << '\a';
                            cout << "Errore: Carattere non consentito." << endl;
                            sleep(2);
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
/*
---------------------------------------------------------------------
                        PAGINA MOLTIPLICAZIONE
---------------------------------------------------------------------
*/
   case '3':
       system("CLS");
       Logo();
       cout << "" << endl;
        cout << "Inserisci due numeri (MOLTIPLICAZIONE):" << endl;
        cin >> a;
       cout << "*" << endl;
       cin >> b;
        sysf= Moltiplicazione(a,b); //CHIAMA LA FUNZIONE MOLTIPLICAZIONE
        cout << "La moltiplicazione e: " << sysf << endl;
        cout << "" << endl;
            Linea();
            cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
            key = getch();
            key = toupper(key);
                switch(key){
                    case 'O': //esci
                    while(i<sys){
                    system("CLS"); //pulisci 5 volte
                    i++;
                    }
                    return main();
                    break;
                    case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                        if (key=='Y'){
                            cout << "Sto per chiudere il programma..." << endl;
                            sleep(2);
                            cout << "Attendere..." << endl;
                            sleep(2);
                            return 0;
                            }
                        if (key=='N'){
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
                        else
                            cout << '\a';
                            cout << "Errore: Carattere non consentito." << endl;
                            sleep(2);
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
/*
---------------------------------------------------------------------
                            PAGINA DIVISIONE
---------------------------------------------------------------------
*/
   case '4':
       system("CLS");
       Logo();
       cout << "" << endl;
        cout << "Inserisci due numeri (DIVISIONE):" << endl;
        cin >> a;
       cout << "/" << endl;
       cin >> b;
        sysf = Divisione(a,b); //CHIAMA LA FUNZIONE DIVISIONE
        cout << "La divisione e: " << sysf << endl;
       cout << "" << endl;
            Linea();
            cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
            key = getch();
            key = toupper(key);
                switch(key){
                    case 'O': //esci
                    while(i<sys){
                    system("CLS"); //pulisci 5 volte
                    i++;
                    }
                    return main();
                    break;
                    case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                        if (key=='Y'){
                            cout << "Sto per chiudere il programma..." << endl;
                            sleep(2);
                            cout << "Attendere..." << endl;
                            sleep(2);
                            return 0;
                            }
                        if (key=='N'){
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
                        else
                            cout << '\a';
                            cout << "Errore: Carattere non consentito." << endl;
                            sleep(2);
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
/*
---------------------------------------------------------------------
                        PAGINA RADICE QUADRATA
---------------------------------------------------------------------
*/
   case '5':
       system("CLS");
       Logo();
       cout << "" << endl;
        cout << "Inserisci numero (RADICE QUADRATA):" << endl;
        cin >> a;
        sysf= Radice(a); //CHIAMA LA FUNZIONE RADICE
        cout << "La radice quadrata di " << a << " : " << sysf << endl;
        cout << "" << endl;
            Linea();
            cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
            key = getch();
            key = toupper(key);
                switch(key){
                    case 'O': //esci
                    while(i<sys){
                    system("CLS"); //pulisci 5 volte
                    i++;
                    }
                    return main();
                    break;
                    case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                        if (key=='Y'){
                            cout << "Sto per chiudere il programma..." << endl;
                            sleep(2);
                            cout << "Attendere..." << endl;
                            sleep(2);
                            return 0;
                            }
                        if (key=='N'){
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
                        else //BUG DA RISOLVERE
                            cout << '\a';
                            cout << "Errore: Carattere non consentito." << endl;
                            sleep(2);
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return main();
                            }
/*
---------------------------------------------------------------------
                        PAGINA SUCCESSIVA
---------------------------------------------------------------------
*/
    case 'X':
        while(i<sys){
            system("CLS"); //pulisci 5 volte
            i++;
            }
        cout << "Caricamento..." << endl;
        Linea();
        sleep(3);
            system("CLS"); //pulisci 5 volte
            return p2();

/*--------------------------------------------------------------------
                           PAGINA OPZIONI
----------------------------------------------------------------------
*/
    case 'Y':
        system("CLS");
        Opzioni();

/*
---------------------------------------------------------------------
                        USCITA PROGRAMMA P1
---------------------------------------------------------------------
*/
    case 'Z':
        Exit();
        return 0;
/*
---------------------------------------------------------------------
                   PER CARATTERI NON CONSENTITI P1
---------------------------------------------------------------------
*/
    //errore numero
    default:
        cout << '\a';
        cout << "Numero non disponibile." << endl;
        sleep(2);
        while(i<sys){
            system("CLS"); //pulisci 5 volte
            i++;
            }
            return main();
   }}

//================================PAGINA 2===========================================

/*
---------------------------------------------------------------------
                        PAGINA TRIG0NOMETRIA
---------------------------------------------------------------------
*/
double pagtri()
{
    int i=0;
    const int sys=5;
    char key,grad;
/*
---------------------------------------------------------------------
                                MENU
---------------------------------------------------------------------
*/
 Logo();
 cout << "" << endl;
 cout << "1) Sin" << endl;
 cout << "2) Cos" << endl;
 cout << "3) Tan" << endl;
 cout << "" << endl;
 cout << "4) Torna al menu" << endl;
 cout << "5) Esci dal programma" << endl;
 cout << "" << endl;
 cout << "Inserisci: " << endl;
 key = getch();

 switch (key)
 {
/*
---------------------------------------------------------------------
                            PAGINA SIN
---------------------------------------------------------------------
*/
    case '1':
        system("CLS");
       Logo();
       float sysf;
       cout << "" << endl;
        cout << "Inserisci il grado:" << endl;
        cin >> grad;
        sysf= Sin(grad); //CHIAMA LA FUNZIONE SIN
        cout << "Il risultato e': " << sysf << endl;
        cout << "" << endl;
        Linea();
        cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
        key = getch();
        key = toupper(key);
        switch(key){
                case 'O': //esci
                sleep(2);
                system("CLS");
                return p2();
                case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                    if (key=='Y'){
                        cout << "Sto per chiudere il programma..." << endl;
                        sleep(2);
                        cout << "Attendere..." << endl;
                        sleep(2);
                        return 0;
                    }
                    if (key=='N'){
                        cout << "Caricamento menu..." << endl;
                        sleep(2);
                        system("CLS");
                        return p2();
                    }
                    else
                        cout << '\a';
                        cout << "Errore: Carattere non consentito." << endl;
                        sleep(2);
                        cout << "Caricamento menu..." << endl;
                        sleep(2);
                        system("CLS");
                        return p2();
                        }
/*
---------------------------------------------------------------------
                        PAGINA COS
---------------------------------------------------------------------
*/
    case '2':
        system("CLS");
       Logo();
       cout << "" << endl;
        cout << "Inserisci il grado:" << endl;
        cin >> grad;
        sysf= Cos(grad); //CHIAMA LA FUNZIONE SIN
        cout << "Il risultato e': " << sysf << endl;
        cout << "" << endl;
        Linea();
        cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| 1 = Ritorna nel menu   |" << endl << "| 2 = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
        key = getch();
        key = toupper(key);
        switch(key){
                case 'O': //esci
                system("CLS"); //pulisci 5 volte
                return p2();
                break;
                case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                    if (key=='Y'){
                        cout << "Sto per chiudere il programma..." << endl;
                        sleep(2);
                        cout << "Attendere..." << endl;
                        sleep(2);
                        return 0;
                                }
                    if (key=='N'){
                        cout << "Caricamento menu..." << endl;
                        sleep(2);
                        system("CLS");
                        return p2();
                                }
                    else
                        cout << '\a';
                        cout << "Errore: Carattere non consentito." << endl;
                        sleep(2);
                        cout << "Caricamento menu..." << endl;
                        sleep(2);
                        system("CLS");
                        return p2();
                                }
/*
---------------------------------------------------------------------
                            PAGINA TAN
---------------------------------------------------------------------
*/
    case '3':
        system("CLS");
       Logo();
       cout << "" << endl;
        cout << "Inserisci il grado:" << endl;
        cin >> grad;
        sysf= Tan(grad); //CHIAMA LA FUNZIONE SIN
        cout << "Il risultato e': " << sysf << endl;
        cout << "" << endl;
        Linea();
        cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| 1 = Ritorna nel menu   |" << endl << "| 2 = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
        key = getch();
        key = toupper(key);
        switch(key){
                case 'O': //esci
                system("CLS"); //pulisci 5 volte
                return p2();
                case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                    if (key=='Y'){
                        cout << "Sto per chiudere il programma..." << endl;
                        sleep(2);
                        cout << "Attendere..." << endl;
                        sleep(2);
                        return 0;
                                }
                    if (key=='N'){
                        cout << "Caricamento menu..." << endl;
                        sleep(2);
                        system("CLS");
                        return p2();
                                }
                    else
                        cout << '\a';
                        cout << "Errore: Carattere non consentito." << endl;
                        sleep(2);
                        cout << "Caricamento menu..." << endl;
                        sleep(2);
                        system("CLS");
                        return p2();
                                }
/*
---------------------------------------------------------------------
                    PER CARATTERI NON CONSENTITI
---------------------------------------------------------------------
*/
    //errore numero
    default:
        cout << '\a';
        cout << "Numero non disponibile." << endl;
        sleep(2);
        while(i<sys){
            system("CLS"); //pulisci 5 volte
            i++;
                    }
            return main();

/*
---------------------------------------------------------------------
                   RITORNARE NELLA PAGINA PRECEDENTE
---------------------------------------------------------------------
*/
        case '4':
            cout << "Caricamento menu..." << endl;
                sleep(2);
                system("CLS");
                return p2();
/*
---------------------------------------------------------------------
                        USCITA PROGRAMMA
---------------------------------------------------------------------
*/
    case '5':
        Exit();
        return 0;
        }
        }
/*
---------------------------------------------------------------------
                            PAGINA 2
---------------------------------------------------------------------
*/
double p2()
    {
    //sys
    char key;
    const int sys=5;
    int i;
    //calc
    float a,b,e,esp,base;

     //INIZIO VARIABILI
    a=0;
    b=0;
    i=0;

    Logo();
    cout << "" << endl;
    cout << "6) Esponenziali" << endl;
    cout << "7) Gonionometria" << endl;
    cout << "" << endl;
    cout << "X) Pagina precedente" << endl;
    cout << "Y) Pagina successiva" << endl;
    cout << "Z) Esci dal programma" << endl;
    cout << "" << endl;
        cout << "Inserisci: ";
        key = getch();
        key = toupper(key);

   //SCELTA
        switch(key)
        {
/*
---------------------------------------------------------------------
                        PAGINA ESPONENZIALE
---------------------------------------------------------------------
*/
   case '6':
       float sysf;
       system("CLS");
       sleep(1);
       Logo();
       cout << "" << endl;
        cout << "Inserisci numero (BASE):" << endl;
        cin >> base;
        cout << "Inserisci esponente:" << endl;
        cin >> esp;
        sysf= Esponente(base,esp); //CHIAMA LA FUNZIONE ESPONENTE
        cout << "Il risultato e': " << sysf << endl;
        Linea();
            cout << "+------------------------+" << endl << "|       Seleziona        |" << endl <<  "+------------------------+" << endl <<  "| O = Ritorna nel menu   |" << endl << "| X = Esci dal programma |" << endl << "+------------------------+" << endl; //MENU
            key = getch();
            key = toupper(key);
                switch(key){
                    case 'O': //esci
                    while(i<sys){
                    system("CLS"); //pulisci 5 volte
                    i++;
                    }
                    return p2();
                    break;
                    case 'X':
                    cout << "Sei sicuro di chiudere il programma? (Y/N)" << endl;
                    key = getch();
                    key = toupper(key);
                        if (key=='Y'){
                            cout << "Sto per chiudere il programma..." << endl;
                            sleep(2);
                            cout << "Attendere..." << endl;
                            sleep(2);
                            return 0;
                            }
                        if (key=='N'){
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return p2();
                            }
                        else
                            cout << '\a';
                            cout << "Errore: Carattere non consentito." << endl;
                            sleep(2);
                            cout << "Caricamento menu..." << endl;
                            sleep(2);
                            system("CLS");
                            return p2();
                            }
/*
---------------------------------------------------------------------
                PASSARE ALLA PAGINA TRIG0NOMETRIA
---------------------------------------------------------------------
*/
    case '7':
        system("CLS");
        sleep(2);
        cout << "Caricamento..." << endl;
        Linea();
        sleep(3);
        system("CLS"); //pulisci 5 volte
        return pagtri();
/*
---------------------------------------------------------------------
                RITORNARE NELLA PAGINA PRECEDENTE P2
---------------------------------------------------------------------
*/
    case 'X':
        cout << "Caricamento menu..." << endl;
            sleep(2);
            system("CLS");
            return main();
/*
---------------------------------------------------------------------
                        USCITA PROGRAMMA P2
---------------------------------------------------------------------
*/
    case 'Z':
        Exit();
        return 0;
/*
---------------------------------------------------------------------
                        PAGINA SUCCESSIVA (P3)
---------------------------------------------------------------------
*/
    case 'Y':
        cout << '\a';
        cout << "La pagina successiva non e' ancora pronta. (WIP)" << endl;
        sleep(2);
        cout << "Caricamento menu principale..." << endl;
        sleep(2);
        system("CLS");
        return main();
/*
---------------------------------------------------------------------
                 PER CARATTERI NON CONSENTITI 2
---------------------------------------------------------------------
*/
    //errore numero
    default:
        cout << '\a';
        cout << "Errore: Numero non disponibile." << endl;
        sleep(2);
        while(i<sys){
            system("CLS"); //pulisci 5 volte
            i++;
            }
            return main();
   }}
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
        cout << '\a';
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

/*-----------------------------------------------------------------------------------------------------------
                                                    OPZIONI
------------------------------------------------------------------------------------------------------------*/
double Opzioni()
{
    char key;
    int i;
    const int sys=5;

        Logo();
        cout << "" << endl;
        cout << "1) Colore Console" << endl;
        cout << "" << endl;
        cout << "X) Torna nel menu" << endl;
        cout << "Y) Esci dal programma" << endl;
        cout << "" << endl;
        cout << "Inserisci: ";
        key = getch();
        key = toupper(key);

   //SCELTA
        switch(key)
        {
        case '1':
            Colore();
        case 'X':
            cout << "Caricamento menu..." << endl;
            sleep(2);
            system("CLS");
            return main();
        case 'Y':
            key=' ';
            Exit();
            return 0;
            break;
        default:
            cout << '\a';
            cout << "Errore: Numero non disponibile." << endl;
            sleep(2);
            system("CLS"); //pulisci 5 volte
            return main();
        }
}

int Colore()
{
    int i;
        system("CLS");
        Logo();
        cout << "" << endl;
        for(i=0;i<256;i++)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
                cout << "" << i;
            }
        cout << "" << endl;
        i=7;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
        sleep(4);
        cout << "" << endl;
        cout << "In tutto ci sono 256 colori nella console." << endl;
        sleep(1);
        cout << "0-15: Colori testo." << endl;
        sleep(1);
        cout << "15+: Colori testo con background colorato." << endl;
        Linea();
        cout << "Inserisci: ";
        cin >> i;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
        cout << "Colore selezionato!" << endl;
        sleep(2);
        cout << "Caricamento menu..." << endl;
        sleep(2);
        system("CLS");
        return main();
}


/*-----------------------------------------------------------------------------------------------------------
                                                    SYS
------------------------------------------------------------------------------------------------------------*/

void Logo()
{
    cout << "        :::   :::   ::::::::::: ::::    ::: :::::::::  :::::::::   ::::::::   :::::::: " << endl;
   cout << "      :+:+: :+:+:      :+:     :+:+:   :+: :+:    :+: :+:    :+: :+:    :+: :+:    :+: " << endl;
   cout << "    +:+ +:+:+ +:+     +:+     :+:+:+  +:+ +:+    +:+ +:+    +:+ +:+    +:+ +:+         " << endl;
   cout << "   +#+  +:+  +#+     +#+     +#+ +:+ +#+ +#++:++#+  +#++:++#:  +#+    +:+ :#:          " << endl;
   cout << "  +#+       +#+     +#+     +#+  +#+#+# +#+        +#+    +#+ +#+    +#+ +#+   +#+#    " << endl;
   cout << " #+#       #+#     #+#     #+#   #+#+# #+#        #+#    #+# #+#    #+# #+#    #+#     " << endl;
   cout << "###       ### ########### ###    #### ###        ###    ###  ########   ########       " << endl;
   cout << "" << endl;
   Linea();
}

void Linea()
{
    cout << "======================================================================================" << endl;
}

int Exit()
{
    cout << "Sto per chiudere il programma..." << endl;
                        sleep(2);
                        cout << "Attendere..." << endl;
                        sleep(2);
                        return 0;
}
