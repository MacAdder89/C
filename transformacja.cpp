#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float metry;
void ile_mil(float m)
    {
        cout<<m*0.00067;
    }
float ile_cali(float m)
{
    return m*39.37;
}

float ile_jardow(float m)
{
    return m*0.9144;
}

float ile_stop(float m)
{
    return m*0.3048;
}

int main()
{
    for(;;)
    {
    char wybor;
    cout<<"menu glowne"<<endl;
    cout<<"1. konwersja na cale"<<endl;
    cout<<"2. konwersja na jardy"<<endl;
    cout<<"3.kowersja na stopy"<<endl;
    cout<<"4.kowersja na mile"<<endl;
    cout<<"Wybierz: "<<endl;
    wybor=getch();
     switch(wybor)
    {
        case '1':   cout<<"Podaj ilosc metrow: ";
                    cin>>metry;
                    cout<<metry<<" metrow to: "<<ile_cali(metry)<<" cali";break;

        case '2':   cout<<"Podaj ilosc metrow: ";
                    cin>>metry;
                    cout<<metry<<" metrow to: "<<ile_cali(metry)<<" jardow";break;

        case '3':   cout<<"Podaj ilosc metrow: ";
                    cin>>metry;
                    cout<<metry<<" metrow to: "<<ile_cali(metry)<<" stop";break;

        case '4':   cout<<"Podaj ilosc metrow: ";
                    cin>>metry;
                    ile_mil(metry);
    }
    return 0;
    getchar();getchar();
    system("cls");
    }
}
