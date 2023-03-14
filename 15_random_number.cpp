//guessing game ; cheak random number
#include <iostream>  
using namespace std;  
int main()  
{  
      while(1)
      {
     int guess_number,ramdom_number;
      cout<<"Enter a guess number Number : ";    
      cin>>guess_number;  
      ramdom_number = rand()%5 +1 ;
      if (guess_number == ramdom_number){    
              cout<<"you are won"<< endl << endl;    
      }    
      else    
      {    
              cout<<"You are lost ; try again" << endl ;
              cout<<"The random number is = "<< ramdom_number<<endl<<endl;     
      }    
      }     
}  