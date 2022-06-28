#include<bits/stdc++.h>
using namespace std;

void find_sqrt(int n, int low, int high)
{
    int ans = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid*mid<n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout<<high;
}
int main()
{
    find_sqrt(26,1,26);
    return 0;
}