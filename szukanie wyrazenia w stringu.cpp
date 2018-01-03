#include <iostream>

using namespace std;

int main()
{
string napis="tomek i atomek";
string szukaj="ato";
size_t pozycja=napis.find(szukaj);
if(pozycja!=string::npos)
{
    cout<<"znaleziono na pozycji"<<pozycja;

}else
{
    cout<<"nie znaleziono";
}
}
