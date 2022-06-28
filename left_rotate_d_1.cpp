#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;

    }
}
int main()
{
    int arr[] = {1,3,0,0,2,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int d = 3;

    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;

}