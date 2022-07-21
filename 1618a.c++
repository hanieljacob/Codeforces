#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a=0;
        ll b=0;
        ll c=0;
        ll num;
        int count=0;
        vector<ll> vec;
        for(int i=0;i<7;i++){
            cin>>num;
            vec.push_back(num);   
        }
        sort(vec.begin(),vec.end());
        a = vec[0];
        b = vec[1];
        for(int i=2;i<7;i++)
            if(vec[i]==a+b)
                count++;
        for(int i=2;i<7;i++){
            for(auto e: vec){
                if(a+b+vec[i] == e && (a+b!=vec[i] || count>1)){
                    c = vec[i];
            
                }
            }
            if(c!=0)
                break;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        vec.clear();
    }
    return 0;
}