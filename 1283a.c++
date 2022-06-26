#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int h;
    int m;
    cin>>t;
    while(t--){
        cin>>h>>m;
        h = 23-h;
        m = 60-m;
        cout<<(h*60)+m<<endl;
    }
    return 0;
}