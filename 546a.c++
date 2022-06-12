#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int n;
    int w;
    int ans;
    cin>>k>>n>>w;
    ans = (k*w*(w+1)/2) - n;
    if(ans<0)
        ans = 0;
    cout<<ans;
}