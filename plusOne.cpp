class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int n = digits.size();
        vector<int>temp;
       
      while(digits[n-1] == 9){
          
               digits[n-1] = 0;
                n-=1;
          }
          
          
               
        
        if(n == 0){
            for(int i = 1; i<digits.size(); i++)
            { 
                 temp[i] = digits[i-1];
            }
            temp[0] = 1;
            digits = temp;
        }
         digits[n-1] = digits[n-1]+ 1;
        return digits;
    }
};