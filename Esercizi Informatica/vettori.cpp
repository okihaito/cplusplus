//----------------------------------------------------------------
//                   INSERIRE NUMERI VETTORI
//----------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int v[6];

    i=0;
    n=6;
    do{
        cout << "Inserisci valore del vettore " << i << ":" << endl;
        cin >> v[i];
        i++;
    }while(i<n);


    return 0;
}
