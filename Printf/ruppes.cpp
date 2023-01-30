#include<iostream>
using namespace std;
int main()
{
    int rs,rs2000,rs500,rs200,rs100,rs50,rs20,rs10,rs5,rs1;
    cout<<"your amount : ";
    cin>>rs;
    rs2000=rs/2000;
    cout<<"rs 2000 :"<<rs2000<<"\n";
    rs=rs-(rs2000*2000);
    rs500=rs/500;
    cout<<"rs 500: "<<rs500<<"\n";
    rs=rs-(rs500*500);
    rs200=rs/200;
    cout<<"rs 200 :"<<rs200<<"\n";
    rs=rs-(rs200*200);
    rs100=rs/100;
    cout<<"rs 100 :"<<rs100<<"\n";
    rs=rs-(rs100*100);
    rs50=rs/50;
    cout<<"rs 50 :"<<rs50<<"\n";
    rs=rs-(rs50*50);
    rs20=rs/20;
    cout<<"rs 20 :"<<rs20<<"\n";
    rs=rs-(rs20*20);
    rs10=rs/10;
    cout<<"rs 10 :"<<rs10<<"\n";
    rs=rs-(rs10*10);
    rs5=rs/5;
    cout<<"rs 5 :"<<rs5<<"\n";
    rs=rs-(rs5*5);
    cout<<"rs 1 :"<<rs<<"\n";


}