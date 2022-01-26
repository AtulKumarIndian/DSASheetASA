    int majorityElement(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++)
        {
            int maj = nums[i];
            int count =0;
            for(int j=0; j<nums.size(); j++)
            {
                if(maj == nums[j]) count++;
                
            } if(count > (nums.size()/2))
                return maj;
        }return 0;
    } 
};