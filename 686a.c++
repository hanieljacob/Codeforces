#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    ll x;
    ll count=0;
    cin>>n>>x;
    ll ans = x;
    while(n--){
        char ch;
        ll num;
        cin>>ch;
        cin>>num;
        if(ch == '+')
            ans+=num;
        else{
            if(num<=ans)
                ans-=num;
            else
                count++;
        }
    }   
    cout<<ans<<" "<<count;
    return 0;
}