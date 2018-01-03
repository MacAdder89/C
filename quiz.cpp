#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

string temat,nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty=0;

int main()
{
    int nr_linii=1;
    string linia;
    int nr_pytania=0;

    fstream plik;
    plik.open("quiz.txt", ios::in);
    if (plik.good()==false)
    {
        cout<<"Blad! Plik nie istnieje!"<<endl;
        exit(0);
    }
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
        case 1: temat=linia;                              break;
        case 2: nick=linia;                               break;
        case 3: tresc[nr_pytania]=linia;                  break;
        case 4: odpA[nr_pytania]=linia;                   break;
        case 5: odpB[nr_pytania]=linia;                   break;
        case 6: odpC[nr_pytania]=linia;                   break;
        case 7: odpD[nr_pytania]=linia;                   break;
        case 8: poprawna[nr_pytania]=linia;               break;
        }


        if(nr_linii==8){nr_linii=2;nr_pytania++;}
        nr_linii++;
    }

    plik.close();
    for(int i=0;i<=4;i++)
    {
        cout<<tresc[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl;
        cout<<"D. "<<odpD[i]<<endl;

        cout<<"podaj Odpowiedz: ";
        cin>>odpowiedz;

        transform(odpowiedz.begin(), odpowiedz.end(),odpowiedz.begin(), ::tolower);// zmniejszanie wielkosci liter gdyby mial ktos wcisniety capslock

        if(odpowiedz==poprawna[i])
            {
                cout<<"dobrze, zdobywasz punkt"<<endl;
                punkty++;
            }else
            {
                cout<<"zle, poprawna odp to: "<<poprawna[i]<<endl;
            }


    }
    if (punkty>4)
    {
    cout<<endl<<"koniec quizu. Zdobyles: "<<punkty<<" punktow";
    }
    else if(punkty<=1)
    {
    cout<<endl<<"koniec quizu. Zdobyles: "<<punkty<<" punkt";
    }
    else if(punkty>1 || punkty<=4)
    {
    cout<<endl<<"koniec quizu. Zdobyles: "<<punkty<<" punkty";
    }
return 0;
}
