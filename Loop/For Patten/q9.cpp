#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j%2==0)
            {
                cout<<"0"<<" ";
            }
            else{
                cout<<"*"<<" ";
            }
        }
        cout<<"\n";
    }
}