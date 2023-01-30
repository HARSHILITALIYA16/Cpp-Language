#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++,a++)
        {
            if(a%4==0)
            {
                cout<<"#";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}