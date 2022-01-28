class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
       int maxDiff =prices[1]-prices[0];
        int min = prices[0];
        for(int i=1; i<n; i++){
             if(maxDiff < (prices[i]-min)){
                maxDiff = prices[i]-min;
            }
            if(min>prices[i]){
                min = prices[i];
            } } 
                 if(maxDiff<0) return 0; return maxDiff;
                
             
}};
