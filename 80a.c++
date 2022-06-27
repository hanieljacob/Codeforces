#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    while(1){
        for(int i=2;i<n+1;i++){
            if((n+1)%i==0){
                i=2;
                n++;
            }
        }
        break;
    }
    cout<< ((n+1 == m)? "YES":"NO")<<endl;
    return 0;
}