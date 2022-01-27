 #include<iostream>
 #include<vector>
using namespace std;

 vector<int> frequencycount(vector<int> nums)
 { // first we create a vector to store data of frequencies of each elememt in given vector nums on elements index
       int n= nums.size()-1;
       vector<int> v(n, 0);
       for(int i =0; i<=n; i++)
       {
           
           
               v[nums[i]-1]+=1;
           
       }
        return v;
       
 }
 int main()
{  vector<int> c = {1,2,3,1,2,4};
    vector<int> res(c.size(),0);
    res= frequencycount(c);
    for(int i = 0; i < c.size(); i++)
    {
        /* code */ cout<<res[i];
    }
    
    return 0;
}