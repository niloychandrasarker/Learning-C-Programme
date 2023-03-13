
// Temparature conversion

#include<iostream>
using namespace std;
int main()
{
  double faren,cels,kel;
   
    cout<< "Enter celcius temparature= " ;
      cin>>cels;
   faren=1.8*cels+32;
    cout<< "fahrenheit= "<< faren <<endl ;
    cout<< "Enter fahrenheit temparature= " ;
      cin>>faren;
      cels=(faren-32)/1.8;
    cout<< "celcius=" << cels;

}