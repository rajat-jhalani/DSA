#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,0,1,1,1,1,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = 0,  sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i])
        {
            sum += arr[i];
        }else
        {
            if(sum>max)
            max = sum;
            sum = 0;
        }
    }
    cout<<max;
    return 0;
}