//Scrivere una funzione che possa ricevere in input due puntatori contenenti l'indirizzo di memoria di due numeri da sommare.
//La funzione dovrà stampare, inoltre, gli indirizzi di memoria e il valore delle variabili e restituire il calcolo della somma tra i due numeri al main.

#include <iostream>

using namespace std;

  int Somma(int *a,int *b);

  int main()
  {
    int a,b,c;
    cout << "Inserisci due numeri:" << endl;
    cin >> a >> b; //inserisci due numeri
    c= Somma(&a,&b); //chiama la funzione somma
    cout << "La somma e': " << c << endl; //torna qui e scrive il risultato

    }

  int Somma(int *a,int *b) //variabili somma
  {
    cout << "L'indirizzo memoria del primo numero: " << a << endl; //fa mostrare l'indirizzo memoria della variabile a
    cout << "Valore: " << *a << endl; //stampa il valore della variabile a
    cout << "L'indirizzo memoria del secondo numero: " << b << endl;
    cout << "Valore: " << *b << endl; //stampa il valore della variabile b
    return *a + *b; //fa la somma delle due variabili e torna nella funzione main
    }
