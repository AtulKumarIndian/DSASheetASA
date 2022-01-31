#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*  Generate a vector that stores factorial of its index as Value(Factorial of Index).
    Acess this factorial vector for values in given array as index of FACTORIAL.
    store this value in given vector.
    
*/
 int kthElement(vector<int>num1, vector<int>num2, int n, int m, int k)
 {
      int ai =0; int bi =0; int count =0;
      while((ai<n) && (bi<m))
      {
          if((count) == k-1) return min(num1[ai], num2[bi]);
          else if(num1[ai] < num2[bi]) {
              ai++;
              count++;
          }
          else {bi++;
              count++;}
      }
      while(ai<n)
      {
          if(count == k-1) return num1[ai];
          else{
              ai++;
              count++;
          }

      } 
      while(bi<m)
      {
          if(count == k-1) return num2[bi];
          else{
              bi++;
              count++;
          }
        
      } 
      return -1;
 }
            
int  main() {
    vector<int> num1 ={1,2,7,8,11};
    vector<int> num2 ={4,5,6};
     int output =  kthElement(num1,num2,5,3,4);
    cout<<output;
   return 0;
}
