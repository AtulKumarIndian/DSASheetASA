#include<iostream>
#include<vector>

using namespace std;
void alternatePosNeg(int v[], int n)
{
    int res[]{0};
    int i =0 , j=1;
    for(int k=0; k<n; k++)
    {
        if(v[k] < 0)
        {
            res[i] = v[k];
            i+=2;
        }
        else 
         {
            res[j] = v[k];
            j+=2;
        }
    } 
}
int main()
{
    int arr[] = {-1,1,2,3,4,-5,-6,7,8};
    int size = (int) sizeof(arr)/sizeof(arr[0]);
      alternatePosNeg(arr, size);
    for(int i=0; i<size; i++)
         cout<<arr[i];
     
    return 0;
}