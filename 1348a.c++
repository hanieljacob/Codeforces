#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    cin>>t;
    while(t--){
        int sum1=0;
        int sum2=0;
        cin>>n;
        if(n==2){
            cout<<2<<endl;
            continue;
        }
        for(int i=n-1;i>=n/2;i--) 
            sum1+= pow(2,i);
        for(int i=1;i<n/2;i++) 
            sum2+= pow(2,i);      
        cout<<pow(2,n) + sum2-sum1<<endl;
    }
    return 0;
}