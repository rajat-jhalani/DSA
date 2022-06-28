// Given an array A[] consisting 0s, 1s and 2s. 
// The task is to write a function that sorts the given array. 
// The functions should put all 0s first, then all 1s and all 2s in last.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0) count_0++;
        else if(arr[i]==1) count_1++;
        else count_2++;
    }
    for(int i=0;i<count_0;i++)
    cout<<"0"<<" ";
    for(int i=0;i<count_1;i++)
    cout<<"1"<<" ";
    for(int i=0;i<count_2;i++)
    cout<<"2"<<" ";
    return 0;
}

