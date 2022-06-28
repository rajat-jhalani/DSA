#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,5,3,1,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int profit = 0;
    int min,max;
    for(int i=1; i<n ; i++)
    {
        if(arr[i]>arr[i-1])
            profit +=(arr[i]-arr[i-1]);
    }
    cout<<profit;
}