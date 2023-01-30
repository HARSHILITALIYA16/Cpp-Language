#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++,a+=2)
        {
            cout<<a<<" ";

        }
        cout<<"\n";
        a=a-(i-1)*2;
    }
}