//abs() in C++
#include <cstdlib>
#include <iostream>
  
using namespace std;
  
int main()
{
    int num = -42;
    int num1 = 42;
    int num2 = 0;
    /// Using abs() function on num, num1, num2.
    int ab = abs(num);
    int ab1 = abs(num1);
    int ab2 = abs(num2);
    cout <<"abs value of "<<num<< " is: "<< ab << "\n";
    cout <<"abs value of "<<num1<< " is: "<< ab1 << "\n";
    cout <<"abs value of "<<num2<< " is: "<< ab2 << "\n";
    return 0;
} 
