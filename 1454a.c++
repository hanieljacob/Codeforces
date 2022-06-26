#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            if(i==n)
                cout<<1<<endl;
            else
                cout<<i+1<<" ";
    }
    return 0;
}