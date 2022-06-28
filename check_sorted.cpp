#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int h = 1;
    int flag = 0;
    while(l<n)
    {
        if(arr[h]<arr[l])
        {
            flag = 1;
            break;
        }
        l++;
        h++;
    }
    if(flag==1)
    cout<<"Not Sorted"<<endl;
    else
    cout<<"Sorted"<<endl;
    return 0;
}