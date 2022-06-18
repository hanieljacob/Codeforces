#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k;
    int tot=0;
    int i;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        tot+=i*5;
        if((tot + k)>240)
            break;
    }
    cout<<i-1;
    return 0;

}