#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[3];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    sort(arr,arr+4);
    cout<<(arr[1]-arr[0]) + (arr[2]-arr[1]);
    return 0;
}