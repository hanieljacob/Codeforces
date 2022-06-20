#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    int j;
    int k;
    cin>>n;
        for(int i=n/2;i>0;i--){
            for(j=2;j<i;j++){
                if(i%j==0)
                    break;
            }
            if(j!=i){
                for(k=2;k<n-i;k++){
                    if((n-i)%k==0)
                        break;
            }
                if(k!=n-i){
                cout<<i<<" "<<n-i;
                break;
                }
                
            }
        }
    
    return 0;
}