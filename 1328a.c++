#include<bits/stdc++.h>
using namespace std;
int main(){
    long a;
    long b;
    int t;
    int temp;
    long ans[10000];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>b)
            ans[i] = ((b * ((a/b)+1)) - a)%b;
        else
            ans[i] = b - a;
    }
    for(int i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}