#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long a;
        long b;
        long c;
        cin>>a>>b>>c;
        if(abs(a-b)*2<a || abs(a-b)*2<b || abs(a-b)*2<c)
            cout<<-1<<endl;
        else{
            if(c-abs(a-b)>=1 && c-abs(a-b)<=abs(a-b)*2)
                cout<<c-abs(a-b)<<endl;
            else
                cout<<c+abs(a-b)<<endl;
        }
    }
    return 0;
}