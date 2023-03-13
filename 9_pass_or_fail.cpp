//C++ program to determine wether the student is pass or fail
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int n;

     const int pass_marks = 33;

    cout<<"Enter Obtained Marks: ";
    cin>>n;

    if (n >= pass_marks)
        cout<<"Pass\n";
    else
        cout<<"Fail\n";
    
    return 0;
}