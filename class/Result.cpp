#include<iostream>
#include<string.h>
using namespace std;
class Myresult
{
    public:
    string student_name;
    int roll_no,mark1,mark2,mark3,total=0;
    float pr;
    void result1()
    {               
        cout<<"STUDENT NAME :";
        cin>>student_name;
        cout<<"ROLL NO      :";
        cin>>roll_no;
        cout<<"ACCOUNT MARK :";
        cin>>mark1;
        cout<<"STAT MARK    :";
        cin>>mark2;
        cout<<"ENGLISH MARK :";
        cin>>mark3;
    }
    
    void total1()
    {
        total=mark1+mark2+mark3;
        cout<<total;       
    }
    int pr1()
    {
       pr=total/3;
       return pr;

    }
    int grade()
    {
        if(mark1<33||mark2<33||mark3<33)
        {
            cout<<"FAIL";
        }
        else if(pr1()>80)
        {
            cout<<"A";
        }
        else if(pr1()>60)
        {
            cout<<"B";
        }
        else if(pr1()>40)
        {
            cout<<"C";
        }
        else{
            cout<<"FAIL";
        }
    }
    void print()
    {
        cout<<"\n"<<"STUDENR NAME :" <<student_name;
        cout<<"\n"<<"ROLL NO      :" <<roll_no;
        cout<<"\n"<<"ACOOUNT      :" <<mark1;
        cout<<"\n"<<"STAT         :" <<mark2;
        cout<<"\n"<<"ENGLISH      :" <<mark3;
    }  
};
int main()
{
    // int i;
    Myresult ab;
    // for(int i=1;i<=3;i++)
    // {
        cout<<endl;
     ab.result1();
     cout<<"******************************************************************";
     ab.print();
     cout<<endl<<"TOTAL        :";
     ab.total1();
     cout<<endl<<"PERCENTAGE   :"<<ab.pr1();
     cout<<endl<<" GRADE       :";
     ab.grade();
     cout<<endl;
     
    // }
}