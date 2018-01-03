#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
            {
    for(;;)
    {
    string imie;
    cout<<"Podaj imie: ";
    cin>>imie;

    int dlugosc=imie.length();

    if (imie[dlugosc=0]=='a'
        )
    {
        cout<<"Twoje imie zaczyna sie na A";
    }else if(imie[dlugosc=0]!='a')
        {
            cout<<"twoje imie zaczyna sie na inna litere niz A";
        }

            getchar();getchar();
            system("cls");

    }
            }




