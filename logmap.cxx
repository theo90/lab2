#include <iostream>
using namespace std;

int main()
{
  //double r=1;



  for ( double  r =0; r<4; r+=0.1)
  {
  
   double x=0.5;
  for( int i=0 ;i<100 ; i++)
  {
    x=x*r*(1-x);
    cout<< r<< "\t" << x<< endl;
     
  }

  }
  
 
  
  

  return 0;
}
