#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int low, int high, int value){
    int mid = (low + high)/2;
    if(arr[mid]==value)
    {
        return mid;
    }
    else if(arr[mid]<value)
    {
        low = mid + 1;
        binary_search(arr, low, high, value);
    }
    else{
        high = mid - 1;
        binary_search(arr, low, high, value);
    }
}
int main()
{
    int arr[] = {1,2,4,4,5}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int l = 0 , h = n-1;
    cout<<binary_search(arr, l, h, target);
    return 0;
}