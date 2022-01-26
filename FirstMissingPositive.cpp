#include<iostream>
#include<vector>

using namespace std;
int FMP(vector<int> v , int size){
    bool arr[1000]{false};
    for(int i =0; i< v.size(); i++)
      {
          if(v[i]>0)
             arr[v[i]] = true;
      }
      for(int i = 1; i<1000; i++)
      {
          if(arr[i] == false) return i;
      }
      
}
int main()
{
    vector<int> v = {-1,1,2,3,4,5,6,7,8};
    int size = v.size();
    
     int res = FMP(v, size);
    cout<<res;
    return 0;
}