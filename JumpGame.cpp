 #include<iostream>
 #include<vector>
using namespace std;
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        for(int i = n-1 ; i >=0 ; i--){
            if(i+nums[i]>=j)j=i;
        }
        return j==0;
    }
    
 int main()
{  vector<int> c = {1,1,1,3,2,4};
   
   bool res = canJump(c);
   cout<<"  "<<res;
    
    return 0;
}