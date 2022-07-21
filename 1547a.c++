#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int xa;
        int ya;
        int xb;
        int yb;
        int xf;
        int yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        if(xf == xa && xf == xb)
            if(yf>yb && yf<ya || yf<yb && yf>ya){
                cout<<abs(xa - xb) + abs(ya - yb)+2<<endl;
                continue;
            }
        if(yf == ya && yf == yb)
            if(xf>xb && xf<xa || xf<xb && xf>xa){
                cout<<abs(xa - xb) + abs(ya - yb)+2<<endl;
                continue;
            }
        cout<<abs(xa - xb) + abs(ya - yb)<<endl;
    }
    return 0;
}