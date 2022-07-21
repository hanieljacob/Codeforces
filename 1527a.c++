#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    ll n;
    cin>>t; 
    while(t--){
        cin>>n;
        ll j=1;
        ll ans=1;
        while(ans<n){
            ans = pow(2,j); 
            j++;  
        }
        if(j==1)
            j=2;
        else if(j==2)
            j=3;
        else if(ans == n)
            j++;
        ans = pow(2,j-2)-1;
        cout<<ans<<endl;
    }
    return 0;
}