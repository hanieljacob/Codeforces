#include<bits/stdc++.h>
using namespace std;;
int main(){
    int t;
    long long n;
    long long start;
    long long count=0;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=9;i++){
            start = i;
            while(start<=n){
                count++;
                start = start*10 + i;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}