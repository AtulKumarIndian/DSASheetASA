#include<iostream>
#include<string>
#include<vector>
using namespace std;
/* We use here two var Begin and end to set data and manipulate vector in each iteration, with full iteration we have product vector as the 
Prodcut of vector elements except the current indexed element in nums.*/
 vector<int> Puzzle(vector<int> nums,int n)
            {

            vector<int>product(n,1);
                int Begin=1, End=1;
                for(int i=0;i<n;i++)
                {
                    product[i]*=Begin;
                    Begin*=nums[i];
                    product[n-i-1]*=End;
                    End*=nums[n-i-1];
                }    
            return product;
            }
int  main() {
    vector<int> nums ={1,2,4,5,4,5,6};
    nums = Puzzle(nums, nums.size());
    for (size_t x: nums)

    {
       cout<<x<<endl;
    }
    
    return 0;
}
