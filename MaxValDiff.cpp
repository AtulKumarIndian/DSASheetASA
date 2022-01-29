int maxVal(vector<int> nums)
{
   int max = abs(arr[0] - arr[1]) + 1;
   for(int i = 1; i< nums.size(); i++)
   {
      int  diff= abs(nums[j] - nums[0]) + abs(i-j);
       if(diff> max)
       {
           max = diff;
       }
   } return diff;
}