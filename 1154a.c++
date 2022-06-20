#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[4];
    int sum;
    int c;
    int a;
    int b;
    for(int i=0;i<4;i++)
        cin>>arr[i];
    sort(arr,arr+4);
    sum = arr[3];
        c = sum - arr[0]; 
        b = sum - arr[1];
        a = sum-b-c;
    cout<<a<<" "<<b<<" "<<c;
    return 0;

}