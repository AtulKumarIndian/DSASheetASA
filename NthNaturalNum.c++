#include<iostream>
using namespace std;
int NthNaturalNumber( int n)
      {
          int rem =0 , i = 1, res= 0;
          while(n>0)
          {
              rem = n%9;
              res = rem*i - res;
              i = i*10;
              n/=9;
          } return res;
      }
int main()
{  
      int a = NthNaturalNumber(20);
      cout<<a;
    cout<<"     Dance";
    return 0;
}