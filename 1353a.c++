#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int m;
    cin>>t;
    while(t--){  
        cin>>n;
        cin>>m;
        if(n==1)
            cout<<0<<endl;
        else if(n==2)
            cout<<m<<endl;
        else
            cout<<m*2<<endl;
    }
    return 0;
}