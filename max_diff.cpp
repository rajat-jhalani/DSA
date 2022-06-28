#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min = arr[i];
        int temp = arr[i] - min;
        if(temp>max)
        max = temp;
    }
    cout<<max;
}