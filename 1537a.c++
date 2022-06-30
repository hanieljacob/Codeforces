#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int num;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>num;
            sum+=num;
        }
        if(sum>0 && sum>=n)
            cout<<sum-n<<endl;
        else
            cout<<1<<endl;

    }
    return 0;
}