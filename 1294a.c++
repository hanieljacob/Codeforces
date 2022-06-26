#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int a;
    int b;
    int c;
    int n;
    int max;
    cin>>t;
    while(t--){
        int count=0;
        cin>>a>>b>>c>>n;
        if(a>b && a>c)
            count=(a-b) + (a-c);
        else if(b>c)
            count=(b-a) + (b-c);
        else
            count=(c-a) + (c-b);
        if(((n-count)%3==0 || count==n) && (n-count) >= 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}