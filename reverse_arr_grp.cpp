// Given an array, reverse every sub-array formed by consecutive k elements.
#include<bits/stdc++.h>
using namespace std;

void reverse_arr(int arr[], int a, int b)
{
    while(a<b){
        swap(arr[a++],arr[b--]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n,k<n;i+=5,k+=5)
    {
        reverse_arr(arr,i,k);
    }
    return 0;
}