#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long n;
    long long ans;
    double m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n%2==0){
            ans = (n/2)*m;
            cout<<ans<<endl;
        }
        else{
            ans = (n/2)*m + ceil(m/2);
            cout<<ans<<endl;
        }
    }
    return 0;
}