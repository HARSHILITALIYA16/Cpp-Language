#include<iostream>
using namespace std;
int main()
{
    
    int a=10,b=2,m=1;
    cout<<"Enter First Value : ";
    cin>>a;
     cout<<"Enter Second Value : ";
    cin>>b;
    while(m!=6)
    {cout<<"\n********************************************";
            cout<<"\n"<<"1:addition"<<"\n";
            cout<<"2:substraction"<<"\n";
            cout<<"3:multiplication"<<"\n";
            cout<<"4:division"<<"\n";
            cout<<"5:modulas"<<"\n";
            cout<<"6:EXIT "<<"\n";
            cout<<"ENTER NUMBER :";
            cin>>m;
            cout<<"\n";

        switch(m)
        {
            case 1:
            cout<<"Addition : "<<a+b;
            break;

            case 2:
            cout<<"Sunstraction : "<<a-b;
            break;

            case 3:
            cout<<"Multiplication : "<<a*b;
            break;

            case 4:
            cout<<"Division : "<<a/b;
            break;

            case 5:
            cout<<"Modulus :"<<a%b;
            break;

            case 6:
            cout<<"EXIT";
            break;
        }
    }
}
