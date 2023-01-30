#include<iostream>
using namespace std;
int main()
{
    char i,j,a=65,b=66;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                cout<<b<<" ";
                b+=2;
            }
            else{
                cout<<a<<" ";
                a+=2;
            }
        }
        cout<<"\n";
    }
}