#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,50,30,20,60,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, k=2;
    sort(arr, arr+n);
    cout<<"Smallest Number: "<<arr[k-1]<<endl;
    cout<<"Largest Number:  "<<arr[n-k]<<endl;;
}
