#include <iostream>
using namespace std;
int main ()
{
    double n=10000;
    double cena=0;
    for(int i=0; i<10; i++)
    {
        n=n*1.06;
    }
    cout<<"След 10 години обучението ще струва "<<n<<"лв на година."<<endl;
    for(int i=0; i<4; i++)
    {
        n=n*1.06;
        cena=cena+n;
    }
    cout<<"След 10 години 4-годишно обучение ще струва "<<cena<<"лв.";
}

