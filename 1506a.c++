#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    ll n;
    ll m;
    ll x;
    ll r;
    ll c; 
    cin>>t;
    while(t--){
        cin>>n>>m>>x;
        c = (x)/n;
        r = x%n;
        if(x%n!=0)
            c++;
        if(r==0)
            r=n;
        ll ans = (r-1)*m + c;
        cout<<ans<<endl;
    }
    return 0;
}