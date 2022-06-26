#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long x;
    long long y;
    long long z;
    long long a;
    long long b;
    long long c;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x==y){
            a = x;
            if(a<y || a<z){
                cout<<"NO"<<endl;
                continue;
            }
            b = z;
            c = b;
        }
        else if(x==z){
            b=x;
            if(b<y || b<z){
                cout<<"NO"<<endl;
                continue;
            }
            a=y;
            c = a;
        }
        else if(y==z){
            c=y;
            if(c<x || c<z){
                cout<<"NO"<<endl;
                continue;
            }
            a=x; 
            b=a;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
         cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}