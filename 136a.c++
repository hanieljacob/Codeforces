#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int b;
    int arr[100];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
        arr[b] = i;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}