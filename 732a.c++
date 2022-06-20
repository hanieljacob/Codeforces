#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    int r;
    int i=2;
    cin>>k>>r;
    int temp = k;
    while(k%10!=0 && (k-r)%10!=0){
        k=temp*i;
        i++;
    }
    cout<<i-1;
    return 0;
}