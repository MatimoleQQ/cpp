#include <iostream>

using namespace std;

string klucz,haslo,zaszyfr;
int main()
{
    cout << "Podaj klucz tylko male litery" <<endl;
    cin >> klucz;
    cout << "Podaj haslo tylko male litery" <<endl;
    cin >> haslo;
    int maks2 = klucz.size();
    int maks = haslo.size();
    zaszyfr.resize(maks);
    for(int i=0; i<=maks; i++)
    {
        int przesuniecie =(int)klucz[i % maks2]-96;
        if(przesuniecie<0)
        {
            przesuniecie=przesuniecie*-1;
        }
        if(((int)haslo[i]-96)+przesuniecie>26)
        {
            zaszyfr[i]=(haslo[i]+przesuniecie)-26;
        }
        else
        {
            zaszyfr[i]=(haslo[i]+przesuniecie);
        }


    }
    cout << zaszyfr;
    return 0;
}
