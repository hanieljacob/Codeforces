#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[100];
    cin>>n;
    if(n%2!=0){
        cout<<-1;
        return 0;
    }
    for(int i=0;i<n;i+=2)
        arr[i] = i+2;
    for(int i=1;i<n;i+=2)
        arr[i] = i;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}