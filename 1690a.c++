#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        int a;
        int b;
        int c=0;
            b = ceil(n/3.0) + 1;
            a = b-1;
            if(a+b==n)
                a--;
            c = n - a - b;
            cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}