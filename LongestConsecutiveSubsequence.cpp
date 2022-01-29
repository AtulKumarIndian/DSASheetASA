include<iostream>
#include<string>
#include<vector>

using namespace std;
/*  
    
*/
int longestConsecutive(vector<int>& nums) {
      int n = nums.size();
    if(n == 0) return 0;
    sort(nums.begin(), nums.end());
    int count = 1; int max=1;
    for(int i= 0; i<n-1; i++)
    {
        if(nums[i+1]== nums[i]) continue;
        else if(nums[i+1] == (nums[i]+1)) count++;
        else{
            if(count>max) max=count;
            count= 1;
        } if(count>max) max=count;
    } 
    return max;
    }
   
    }
int  main() {
    vector<int> nums ={4,5,6,7,8,10,11,12,13};
     int maxCount = longestConsecutive(nums);
     cout<<maxCount;
    return 0;
}
