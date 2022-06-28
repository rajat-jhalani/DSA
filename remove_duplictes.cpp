#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] =  {3,5,4,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    int brr[n];
    int k = 0;
    brr[k++] = arr[0];

    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<k; j++)
        {
            if(arr[i]==brr[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        brr[k++] = arr[i];
    }
    for(int i=0; i<k ; i++)
    cout<<brr[i]<<" ";
    return 0;
}