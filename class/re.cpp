#include <iostream>
using namespace std;
class Student
{
    int roll_no;
    float english, maths, science, total;
    char name[20];

public:
    void Std_data()
    {
        cout << "\nEnter Roll-no: ";
        cin >> roll_no;
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\nEnter English Marks: ";
        cin >> english;
        cout << "\nEnter Maths Marks: ";
        cin >> maths;
        cout << "\nEnter Science Marks: ";
        cin >> science;
    }
    int Total()
    {
        total = english + maths + science;
        return total;
    }
    void details()
    {
        cout << "\nRoll-no       : " << roll_no;
        cout << "\nName          : " << name;
        cout << "\nEnglish marks : " << english;
        cout << "\nMaths marks   : " << maths;
        cout << "\nScience marks : " << science;
        // int a=Total();
        cout << "\nTotal         : " << Total();
    }
};
int main()
{
    Student std;
    std.Std_data();
   // std.Total();
    std.details();
}