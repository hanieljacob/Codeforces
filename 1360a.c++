#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        if(a==b)
            cout<<(a+b)*(a+b)<<endl;
        else if(max(a,b)%min(a,b)==0)
            cout<<max(a,b)*max(a,b)<<endl;
        else if(min(a,b)*2 < max(a,b))
            cout<<max(a,b)*max(a,b)<<endl;
        else if(min(a,b)*2 >max(a,b))
            cout<<min(a,b)*min(a,b)*4<<endl;
        else    
            cout<<pow(max(a,b) + max(a,b)/min(a,b),2)<<endl;
    }
    return 0;
}