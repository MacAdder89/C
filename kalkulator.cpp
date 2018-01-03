#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h> //biblioteka wykonuje bez entera
using namespace std;

float x,y;
char wybor;

int main()
{
    for(;;)
    {
    cout<<"podaj 1 liczbe: "<< endl;
    cin>>x;

    cout<<"podaj 2 liczbe: "<<endl;
    cin>>y;

    cout<<endl;
    cout<<"Menu G³owne"<<endl;
    cout<<"------------"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. koniec programu"<<endl;
    cout<<"Wybierz: ";
    wybor=getch();

    switch(wybor)
    {
        case '1':
            cout<<x+y;
                break;
        case '2':
            cout<<x-y;
                break;
        case '3':
            cout<<x*y;
                break;
        case '4':if(y==0)cout<<"nie dzielimy przez zero";
               else cout<<x/y;
                break;
        case '5':
            exit(0);
                break;
        default:
            cout<<"nie ma takiej opcji";
                break;
    }

    }
    getchar();getchar();
    system("cls");
    return 0;
}
