#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double n;
    double x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        if(n==1 || n==2)
            cout<<1<<endl;
        else
            cout<<1 + ceil((n-2)/x)<<endl;
    }
    return 0;
}