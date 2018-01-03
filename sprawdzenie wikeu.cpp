#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "ile masz lat?:";
    cin>>wiek;

    if(wiek<18)
    {
        cout<<"Jestes nie pelnoletni i nie mozesz byc prezydentem"<<endl;
    }
        else if ((wiek>=18)&&(wiek<35))
        {
            cout<<"jestes pelnoletni ale nie mozesz byc prezydentem"<<endl;
        }
        else
        {
            cout<<"jestes pelnoletni i mozesz byc prezydentem"<<endl;
        }
    return 0;
}
