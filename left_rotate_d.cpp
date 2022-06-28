#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,0,0,2,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int d = 2;
    int brr[d];

    for(int i=0 ; i<d ; i++)
    brr[i] = arr[i];

    for(int i=d;i<n;i++)
    arr[i-d] = arr[i];

    for(int i=0 ; i<d ; i++)
    arr[n-d+i] = brr[i];

    for(int i=0 ; i<n ; i++)
    cout<<arr[i]<<" ";

    return 0;

}