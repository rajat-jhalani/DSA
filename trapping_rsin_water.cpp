#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int n)
{
    int largest = 0;
    int res = -1;

    for(int i = 1; i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            res = i;
        }
        
    }
    return res;
}
int main()
{
    int arr[] = {3,0,4,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sec_max = secondlargest(arr,n);

    int sum = 0;

    for(int i=1; i<n-1 ; i++)
    {
        sec_max += abs(sec_max-arr[i]);
    }

    cout<<sec_max;
}