#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int liczba; int strzal; int ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe z zakresu od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout << " Zgadnij jaka to liczba:";
        cin >> strzal;

        if (strzal==liczba)
            cout<<"Brawo trafiles! To byla twoja proba nr:"<<ile_prob<<endl;
        else if(strzal<=liczba)
            cout<<"Za nisko! To byla twoja proba nr:"<<ile_prob<<endl;
        else if(strzal>=liczba)
            cout<<"Za wysoko! To byla twoja proba nr:"<<ile_prob<<endl;


    }
    getchar();getchar();
    //system ("pause");
    return 0;
}
