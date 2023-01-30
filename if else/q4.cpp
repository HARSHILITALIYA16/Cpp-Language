#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"ENTER VALUE 1 :";
    cin>>x;
    cout<<"ENTER VALUE 2 :";
    cin>>y;
    if(x<2000 || x>=3000)
    {
        cout<<"X"<<"\n";
    }
    if(y>100 && y<500)
    {
        cout<<"Y"<<"\n";
    }
    else
    {
        cout<<"INVALID VALUE";
    }
}