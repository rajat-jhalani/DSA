// Given two sorted arrays of size m and n respectively, 
// you are tasked with finding the element that would be at the k’th position of the final sorted array.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {100, 112, 256, 349, 770}; 
    int m = sizeof(arr)/sizeof(arr[0]);

    int brr[] = {72, 86, 113, 119, 265, 445, 892}; 
    int n = sizeof(brr)/sizeof(brr[0]);

    int k = 7;

    int p = 0, q = 0, count = 0;
    while(p+q<m+n-2)
    {
        if(arr[p]<brr[q]){
            p++;
            count++;
        }
        else{
            q++;
            count++;
        }
        if(count==k-1){
            if(arr[p]<brr[q])
            cout<<arr[p];
            else
            cout<<brr[q];
        }
    }
    return 0;
}