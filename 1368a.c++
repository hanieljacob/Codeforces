#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int n;
        int count=0;
        long sum=0;
        cin>>a>>b>>n;
        while(sum<=n){
            if(a>b){
                b+=a;
                sum=b;
                count++;
            }
            else{ 
                a+=b;
                sum=a;
                count++;
            }
            if(sum>n)
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}