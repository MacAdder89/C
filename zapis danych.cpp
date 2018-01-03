#include <iostream>
#include <fstream>
using namespace std;
string login,haslo;
int email;
int main()
{
    cout << "Podaj login: "; cin>>login;
    cout << "Podaj haslo: "; cin>>haslo;
    cout << "Podaj email: "; cin>>email;

    fstream plik;
    plik.open("dane logowania", ios::out | ios::app);
    plik<<"login: "<<login<<endl;
    plik<<"haslo: "<<haslo<<endl;
    plik<<"email: "<<email<<endl;
    plik.close();
    return 0;
}





















