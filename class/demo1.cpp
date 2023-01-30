#include <iostream>
using namespace std;

class MyClass { 
    int j;
                      // The class
  public:             // Access specifier
    int _myNum;        // Attribute (int variable)
    string _myString;  // Attribute (string variable)
 
    void sum()
    {
    int a=10,b=20;
    int c=a+b;
    cout<<c;
    }
};

int main() {

  MyClass abc;  // Create an object of MyClass
// Access attributes and set values
abc._myNum=15;
  // Print values
  cout << abc._myNum << "\n"; 
  cout << abc._myString<<"\n"; 
  abc.sum();
  return 0;
}