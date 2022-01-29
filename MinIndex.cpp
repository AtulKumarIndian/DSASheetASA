#include<iostream>
using namespace std;
int maxInDiff(int A[], int N) {
    int k = N-1;
    int max =0;
    while(k>0){
        int i=0;
        while(i<k){
            if(A[k]>=A[i] && k>i)
            {
                if(max<(k-i)) { max=k-i;  break;}
            }i++;
        }k--;
    }return max;
}
int main()
{
    int arr[]={1,22,2,5,131,81,2132,45,45,4};
    int diff= maxInDiff(arr, 10);
    cout<<diff;
}     
     