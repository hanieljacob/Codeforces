#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int num;
        int odd=0;
        int even=0;
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>num;
            if(num%2==0)
                even++;
            else
                odd++;
        }
        if(even == odd)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}