#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <algorithm>




using namespace std;



int main()


{

    float  a,b,c,d,e,f,g,h;
    float wynik;
    float wynikC,wynikD,wynikE,wynikF,wynikG,wynikH;
    char wybor,wyborC,wyborD,wyborE,wyborF,wyborG,wyborH;

    cout<<"Kalkulator"<<endl;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;

start:
    cout<<"Podaj operacje jaka chcesz wykonac (+), (-), (*), (/): ";

    wybor=getch();

    switch(wybor)
        {
            case '+':   cout<<"  Dodawanie    ("<<wybor<<")   ";
                        cout<<a<<wybor;
                            cin>>b;
                            wynik=a+b;
                                cout<<a<<wybor<<b<<"="<<wynik<<endl;
                                    break;

            case '-':   cout<<"  Odejmmowanie ("<<wybor<<")   ";
                        cout<<a<<wybor;
                            cin>>b;
                                wynik=a-b;
                                cout<<a<<wybor<<b<<"="<<wynik<<endl;
                                    break;

            case '*':   cout<<"  Mnozenie     ("<<wybor<<")   ";
                            cout<<a<<wybor;
                            cin>>b;
                                wynik=a*b;
                                cout<<a<<wybor<<b<<"="<<wynik<<endl;
                                    break;

            case '/':  startCaseInside:
                        cout<<"  Dzielenie    ("<<wybor<<")   ";
                            cout<<a<<wybor;
                            cin>>b;
                                if(b!=0)
                                    {
                                        wynik=a/b;
                                        cout<<a<<wybor<<b<<"="<<wynik<<endl;
                                    }else   {cout<<"nie dzielimy przez zero"<<endl;
                                                Sleep(500);
                                                goto startCaseInside;
                                            }
                                        break;

            default: cout<<"nie ma takiej opcji"<<endl;
                        Sleep(500);
                        goto start;
                        break;
        }
//Liczba C

startC:

    cout<<"Podaj operacje jaka chcesz wykonac (+), (-), (*), (/): "<<wynik;
    wyborC=getch();
    switch(wyborC)
        {
            case '+':   cout<<"  Dodawanie    ("<<wyborC<<")   "<<a<<wybor<<b<<wyborC;
                            cin>>c;
                                wynikC=wynik+c;
                                cout<<a<<wybor<<b<<wyborC<<c<<"="<<wynikC<<endl;
                                    break;

            case '-':   cout<<"  Odejmmowanie ("<<wyborC<<")   ";
                            cin>>c;
                                wynikC=wynik-c;
                                cout<<a<<wybor<<b<<wyborC<<c<<"="<<wynikC<<endl;
                                    break;

            case '*':   cout<<"  Mnozenie     ("<<wyborC<<")   ";
                            cin>>c;
                                wynikC=wynik*c;
                                cout<<a<<wybor<<b<<wyborC<<c<<"="<<wynikC<<endl;
                                    break;

            case '/':  startCaseInsideC:
                        cout<<"  Dzielenie    ("<<wyborC<<")   ";
                            cin>>c;
                                if(b!=0)
                                    {
                                        wynikC=wynik/c;
                                cout<<a<<wybor<<b<<wyborC<<c<<"="<<wynikC<<endl;
                                    }else   {cout<<"nie dzielimy przez zero"<<endl;
                                                Sleep(500);
                                                goto startCaseInsideC;
                                            }
                                        break;

            default: cout<<"nie ma takiej opcji";
                        Sleep(500);
                        goto startC;
                        break;


        }

//Liczba D

startD:
    cout<<"Podaj operacje jaka chcesz wykonac (+), (-), (*), (/): ";

    wyborD=getch();
    switch(wyborD)
        {
            case '+':   cout<<"  Dodawanie    ("<<wyborD<<")   ";
                            cin>>d;
                                wynikD=wynikC+d;
                                cout<<a<<wybor<<b<<wyborC<<c<<wyborD<<d<<"="<<wynikD<<endl;
                                    break;

            case '-':   cout<<"  Odejmmowanie ("<<wyborD<<")   ";
                            cin>>c;
                                wynikD=wynikC-d;
                                cout<<a<<wybor<<b<<wyborC<<c<<wyborD<<d<<"="<<wynikD<<endl;
                                    break;

            case '*':   cout<<"  Mnozenie     ("<<wyborD<<")   ";
                            cin>>c;
                                wynikD=wynikC*d;
                                cout<<a<<wybor<<b<<wyborC<<c<<wyborD<<d<<"="<<wynikD<<endl;
                                    break;

            case '/':  startCaseInsideD:
                        cout<<"  Dzielenie    ("<<wyborD<<")   ";
                            cin>>c;
                                if(b!=0)
                                    {
                                        wynikD=wynikC/d;
                                cout<<a<<wybor<<b<<wyborC<<c<<wyborD<<d<<"="<<wynikD<<endl;
                                    }else   {cout<<"nie dzielimy przez zero"<<endl;
                                                Sleep(500);
                                                goto startCaseInsideD;
                                            }
                                        break;

            default: cout<<"nie ma takiej opcji";
                        Sleep(500);
                        goto startD;
                        break;


        }
}



