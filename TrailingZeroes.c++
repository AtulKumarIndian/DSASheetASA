
    int trailingZeroes(int n) {
        int res=0;
        while((n/5)!= 0)
        {   
             n = n/5;
            res = n + res;
        }
        
        return res;
              
    }
