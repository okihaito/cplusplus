#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    for(i=0;i<256;i++)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
                cout << "" << i;
            }
        cout << "" << endl;
        i=7;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}
