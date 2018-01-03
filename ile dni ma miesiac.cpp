#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

/*int nr_miesiaca;

int main()
{
    for(;;)
    {
    cout<<"Podaj numer miesiaca: ";

    if (!(cin>>nr_miesiaca))
        cerr<<"to nie jest liczba";// cerr console error
        exit(0);

    switch (nr_miesiaca)
    {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"miesiac ma 31 dni"<<endl;
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"miesiac ma 30 dni"<<endl;
            break;
    case 2:
            int rok;
            cout<<"podaj rok: ";
            cin>>rok;
            if(((rok%4==0)&&(rok%100!=0)||(rok%400==0)))
            {
                cout<<"ten miesiac ma 29 dni"<<endl;
            }
                else{
                cout << "ten miesiac ma 28 dni"<<endl;
                }
                break;
    default: cout << "niepoprawny nr misiaca"<<endl;
                break;
    }
    }
    getchar();getchar();
    system("cls");

    return 0;
}
*/


int nr_miesiaca;

int main()
{
    for(;;)
    {
        cout<<"podaj numer miesiaca: "; cin>>nr_miesiaca;
            if(!(cin>>nr_miesiaca))
            {
                cerr<<"to nie jest liczba";
                exit(0);
            }

            switch (nr_miesiaca)
                {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        cout<<"miesiac ma 31 dni"; break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                         cout<<"miesiac ma 30 dni"; break;

                    case 2:
                        int rok;
                        cout<<"podaj rok: ";cin>>rok;


                }





    }








}
