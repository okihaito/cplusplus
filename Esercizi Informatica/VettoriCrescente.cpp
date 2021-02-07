/*------------------------------------------------------------------------------------------
                            Ordine crescente numero vettori
-------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
    int i,V[5],j;
    int temp;

    j=0;
    while(i<5){
        cout << "Scrivi un numero intero per il vettore " << i << endl;
        cin >> V[i];
        i++;
    }
        for(i=0;i<5-1;i++){
                for(j=i+1;j<5;j++){
            if(V[i] > V[j]){
                temp = V[i];
                V[i] = V[j];
                V[j] = temp;
            }

        }
    }
        cout<<"Ordine crescente:  "<<V[0]<<" "<<V[1]<<" "<<V[2]<<" "<<V[3]<<" "<<V[4]<<endl;
    return 0;
}
