#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>>x>>y;
        if(x-y > 0){
            if((x-y)%2==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else if(x-y < 0){
            if((x-y)%2==0)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else
            cout<<0<<endl;     
    }
    return 0;
}
