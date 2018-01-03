#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int liczba;

int main()
{
    srand(time(NULL));
    cout << "Witaj losowanie rozpocznie sie za:";
    for(int i=3;i>=0;i--)
    {
        Sleep(1000);
        system("cls");
        cout<<i;
    }
        Sleep(1000);
        system("cls");

    for (int i=1;i<=6;i++)
        {
            Sleep(1000);

            liczba=rand()%49+1;
            cout<<liczba<<endl;
        }
    return 0;
}
