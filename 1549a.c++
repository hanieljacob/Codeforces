#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    ll p;
    cin>>t;
    while(t--){
        cin>>p;
        if(p==5)
            p=8;
        cout<<2<<" "<<p/2<<endl;
    }
    return 0;
}