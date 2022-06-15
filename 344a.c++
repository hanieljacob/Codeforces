#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[100000];
    int count=1;
    cin>>n;   
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i]%10 == arr[i+1]/10)
            count++;
    }
    cout<<count;
    return 0;
}