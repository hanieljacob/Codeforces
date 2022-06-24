#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int w;
    int h;
    long n;
    cin>>t;
    while(t--){
        long count=1;
        cin>>w>>h>>n;
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        while(w%2==0){
            w=w/2;  
            count*=2;
        }
        while(h%2==0){ 
            h=h/2;
            count*=2;
        }
        if(n>count)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;    
    }
    return 0;
}