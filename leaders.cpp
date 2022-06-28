#include <bits/stdc++.h>
using namespace std;

void printLeaders(int arr[], int size){
    int j;
    for(int i=0; i<size; i++){
        //int max = arr[i];
        for(j=i+1; j<size; j++){
            if(arr[j]>=arr[i])  break;
        }
        if(j==size)
        cout<< arr[i] << endl;

    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}