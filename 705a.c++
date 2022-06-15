#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1 = "I hate it";
    string s2 = "I love it";
    string s3 = "I hate that ";
    string s4 = "I love that ";
    string ans="I hate that ";
    int n,m;
    int flag=0;
    cin>>n;
    m=n;
    if (n==1){
        cout<<s1;
        return 0;
    }
    n=n-1;
    while(n!=0){
        if(m%2!=0 && n==1){
            ans+=s1;
            break;
        }
        if(m%2==0 && n==1){
            ans+=s2;
            break;
        }
        if(flag==0){
            ans+=s4;
            flag=1;
        }
        else{
            ans+=s3;
            flag=0;
        }
        n--;
    }
        cout<<ans;
    return 0;
}