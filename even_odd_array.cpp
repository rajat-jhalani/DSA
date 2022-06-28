#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,12,14,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int curr = 1, res = 1;

    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            curr++;
            res = max(curr,res);
        }
        else
            curr = 1;
    }
    cout<<res;
}