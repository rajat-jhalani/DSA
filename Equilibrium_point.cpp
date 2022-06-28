// Find an element in array such that sum of left array is equal to sum of right array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 1, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    /* int pr_sum[] = prefix_sum(arr,n);
    int su_sum[] = suffix_sum(arr,n); */
    int pr_sum[n], su_sum[n];
    int sum = 0;
    
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
        pr_sum[i] = sum;
    }
    sum = 0;
    for(int i=n-1; i>=0; i--)
    {   
        sum = sum + arr[i];
        su_sum[i] = sum;
    }
    for(int i=0;i<n;i++)
    {   
        if(pr_sum[i]==su_sum[i])
        {
            
            cout<<arr[i];
            break;
        }

    }
    return 0;
}