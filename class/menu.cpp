#include<iostream>
using namespace std;
class Mymenu
{
   public:
   char name[100];
   int q,total=0;
   void print()
   {
    cout<<"PRESS 1: VADAPAV    25"<<endl;
    cout<<"PRESS 2: PAVBHAJI   55"<<endl;
    cout<<"PRESS 3: SAMOSA     10"<<endl;
    cout<<"PRESS 4: DHOSA      100"<<endl;
    cout<<"PRESS 5: SENDWICH   25"<<endl;
    cout<<"PRESS 6: BURGER     35"<<endl;
    cout<<"PRESS 7: MOMAS      40"<<endl;
    cout<<"PRESS 8: PIZZA      120"<<endl;
    cout<<"PRESS 9: KHAVSA     40"<<endl;
    cout<<"PRESS 10:COLD DRINK 20"<<endl;
    cout<<"PRESS 0 : EXIT "<<endl;
   }
   void vadapav()
   {
    cout<<"ENTER QUANTITIY :";
    cin>>q;
    total=total+(q*25);
   }
  void pavbhaji()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*55);

  }
  void samosa()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*10);
  }
  void dhosa()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*100);
  }
  void sendwich()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*25);
  }
  void burger()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*35);
  }
  void momas()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*40);
  }
  void pizza()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*120);
  }
  void khavsa()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*40);
  }
  void colddrink()
  {
    cout<<"ENTER QUANTITY :";
    cin>>q;
    total+=(q*20);
  }
   void total1()
   {
    cout<<name<<" bill is "<<total;
   }
};
int main()
{
    int a=1;
    Mymenu abc;
    cout<<"ENTER YOUR NAME :";
    cin>>abc.name;
    for( int i=1;a!=0;i++)
    {
        abc.print();
        cout<<"choice :";
        cin>>a;

        switch(a) 
        {
            case 1:
            abc.vadapav();
            break;

            case 2:
            abc.pavbhaji();
            break;

            case 3:
            abc.samosa();
            break;

            case 4:
            abc.dhosa();
            break;

            case 5:
            abc.sendwich();
            break;

            case 6:
            abc.burger();
            break;

            case 7:
            abc.momas();
            break;

            case 8:
            abc.pizza();
            break;

            case 9:
            abc.khavsa();
            break;

            case 10:
            abc.colddrink();
            break;

            case 0:
            abc.total1();
            break;
        }
    }
}