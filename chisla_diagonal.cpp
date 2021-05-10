#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=n; i>0; i--)
    {
         for(int j=i; j>0; j--)
        {
            cout<<j<<" ";
        }
        for(int k=2; k<i+1; k++)
        {
            cout<<k<<" ";
        }
            cout<<endl;
    }
}
