#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p;
    int q;
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        cin>>q;
        if(q-1>p)
            count++;
    }
    cout<<count;
    return 0;
}