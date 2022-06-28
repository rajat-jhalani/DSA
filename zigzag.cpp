// Given an array of DISTINCT elements, 
// rearrange the elements of array in zig-zag fashion in O(n) time. 
// The converted array should be in form a < b > c < d > e < f. 

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {4, 3, 7, 8, 6, 2, 1};       // Output: arr[] = {3, 7, 4, 8, 2, 6, 1}
    int n = sizeof(arr)/sizeof(arr[0]);

    if(arr[0]>arr[1]) swap(arr[0],arr[1]);
    for(int i=1; i<n-1 ; i+=2)
    {
        if(arr[i]<arr[i-1]) swap(arr[i],arr[i-1]);
        if(arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
    }
    for(int i=2; i<n-1 ; i+=2)
    {
        if(arr[i]>arr[i-1]) swap(arr[i],arr[i-1]);
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    if(arr[n-1]<arr[n-2]) swap(arr[n-1],arr[n-2]);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return  0;
}