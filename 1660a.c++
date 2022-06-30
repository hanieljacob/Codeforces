#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a;
    int b;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        int sum=0;
        sum = a + b*2;
        if(a==0)
            cout<<1<<endl;
        else
            cout<<sum+1<<endl;
    }
    return 0;
}