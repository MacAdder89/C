#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

/*int main()
{
    string napis;

    cout<<"podaj wyraz: ";
    cin>>napis;
     int dlugosc=napis.length();
    for (int i=dlugosc-1;i>=0;i--)
    {
        cout<<napis[i];    }

}
*/

int main()
{
    for(;;)
    {
    string napis;
    cout<<"wpisz napis do napisania od tylu: "<<endl;
    cin>>napis;
    int dlugosc=napis.length();
    for(int i=dlugosc-1;i>=0;i--)
    {
        cout<<napis[i]
    }
    Sleep(2000);
    system("cls");
    }
}
