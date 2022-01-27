/*
Given a boolean 2D array of n x m dimensions where each row is sorted.
Find the 0-based index of the first row that has the maximum number of 1's.*/
 #include<iostream>
 #include<vector>
using namespace std;
  int rowWithMax1s(int a[][], int n, int m){
       for(int i=0, int j =0; i<n, j<m; i++)
    {
        if(a[i][j]== 1) return i;
        if(i = 3) {i%=3; j++}
    } return ;
  } 
   

