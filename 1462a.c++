#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    float n;
    int j=0;
    int i=0;
    int a[300];
    int b[300];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;j<ceil(n/2);j++,i+=2)
        b[i] = a[j];
    i=1;
    for(j=n-1;j>=ceil(n/2);j--,i+=2)
        b[i] = a[j];
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    }
    return 0;
}