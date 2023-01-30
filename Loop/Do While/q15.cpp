#include<iostream>
using namespace std;
int main()
{
    int a=1;
    do{
        if(a%2==0)
        {
            cout<<a*a<<"\t";
        }
        else{
            cout<<a<<"\tq";
        }
        a++;
    }
    while(a<=10);
}