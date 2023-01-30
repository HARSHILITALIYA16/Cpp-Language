#include<iostream>
using namespace std;
int main()
{
    char i,j,a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++,a++)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
}