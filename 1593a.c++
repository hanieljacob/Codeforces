#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long a;
    long long b;
    long long c;
    cin>>t;
    while(t--){
        int max;
        int flag=0;
        cin>>a>>b>>c;
        if(a==b && a==c && b==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
            continue;
        }
        if(a>b && a>c)
            max=a;
        else if(b>c)
            max=b;
        else
            max=c;   
        if(a==max && b==max)
            cout<<1<<" "<<1<<" "<<max-c+1<<endl;
        else if(b==max && c==max)
            cout<<max-a+1<<" "<<1<<" "<<1<<endl;
        else if(a==max && c==max)
            cout<<1<<" "<<max-b+1<<" "<<1<<endl;
        else if(a==max)
            cout<<max-a<<" "<<max-b+1<<" "<<max-c+1<<endl;
        else if(b==max)
            cout<<max-a+1<<" "<<max-b<<" "<<max-c+1<<endl;
        else 
            cout<<max-a+1<<" "<<max-b+1<<" "<<max-c<<endl;
    }
    return 0;
}