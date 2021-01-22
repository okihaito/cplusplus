//----------------------------------------------------------------
//                   SCAMBIO VARIABILI
//----------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int temp, a, b;

    cout << "Inserisci un numero nella variabile A:" << endl;
    cin >> a; //UTENTE INSERISCE NUMERO NELLA VARIABILE A.
    cout << "Inserisci un numero nella variabile B:" << endl;
    cin >> b; //UTENTE INSERISCE NUMERO NELLA VARIABILE B.
    cout << "A ora: " << a << endl; //STAMPA NUMERO VARIABILE A.
    cout << "B ora: " << b << endl; //STAMPA NUMERO VARIABILE B.

    temp=a; //LA VARIABILE TEMPORANEA (0) PRENDE IL NUMERO VARIABILE A.
    a=b; //LA VARIABILE A (?) PRENDE IL NUMERO VARIABILE B.
    b=temp; //LA VARIABILE B PRENDE IL NUMERO VARIABILE A.

    cout << "SCAMBIO VARIABILI:" << endl;
    cout << "A ora: " << a << endl; //STAMPA NUMERO VARIABILE A.
    cout << "B ora: " << b << endl; //STAMPA NUMERO VARIABILE B.

    return 0;
