// 209. Minimum Size Subarray Sum
// Given an array of positive integers nums and a positive integer target, 
// return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] 
// of which the sum is greater than or equal to target. 
// If there is no such subarray, return 0 instead.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 11;

    int p_sum[n] = {0};
    int sum = 0, min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
        p_sum[i] = sum;
    }
    for(int i=0;i<n;i++) cout<<p_sum[i]<<" ";
    cout<<endl;
    int i=0,j=1;
    while(i<n && j<n)
    {
        if(i != j &&(p_sum[j]-p_sum[i]==target || p_sum[i]-p_sum[j]==target))
        {
            if(abs(j-i)<min)
            min = abs(j-i);
            i++;
            j++;
        }
        else if (p_sum[j]-p_sum[i] < target)
            j++;
        else
            i++;
    }
    if(min == INT_MAX)
    cout<<0;
    else
    cout<<min;

}