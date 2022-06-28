// Given a sorted array of positive integers, 
// rearrange the array alternately i.e first element should be maximum value, 
// second minimum value, third second max, fourth second min and so on. 
#include<bits/stdc++.h>4
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n] = {0};

    int l = 0, r = n-1, i = 0;
    while (l<r)
    {
        /* code */
        brr[i++] = arr[r--];
        brr[i++] = arr[l++];
    }
    if(l==r) brr[i++] = arr[r];
    
    for(i = 0; i<n; i++) cout<<brr[i]<<" ";
    return 0;
}