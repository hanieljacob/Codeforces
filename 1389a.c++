#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long l;
        long r;
        int i;
        int flag=0;
        cin>>l;
        cin>>r; 
        if(r>=2*l)
            cout<<l<<" "<<2*l<<endl;
        else
            cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}