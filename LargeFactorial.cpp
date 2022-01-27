#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*  Generate a vector that stores factorial of its index as Value(Factorial of Index).
    Acess this factorial vector for values in given array as index of FACTORIAL.
    store this value in given vector.
    
*/
 vector<int> LargeFactorial(vector<int> nums,int n)
            {  
                int maxEle = -1;
                for (int i = 0; i < n; i++)
            {
                maxEle= maxEle<nums[i]?nums[i]: maxEle ;
            }
            
               
            vector<int>Factorial(maxEle,1);
            long long res = 1;
            Factorial[0] = Factorial[1] = 1;
            for(int i=2; i<=maxEle; i++)
            {
                res = res*i;
                Factorial[i] = res;
            }
            for(int i =0; i<n; i++)
            {
                nums[i]= Factorial[nums[i]];
            }
               return nums;
            }
int  main() {
    vector<int> nums ={4,5,6};
     nums = LargeFactorial(nums, nums.size());
    for (size_t x: nums)

    {
       cout<<x<<endl;
    }
    
    return 0;
}
