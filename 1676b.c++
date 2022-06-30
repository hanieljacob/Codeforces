#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long num;
    int n;
    vector<long> vec;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            vec.push_back(num);
        }
        if(n==1){
            cout<<0<<endl;
            vec.clear();
            continue;
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            sum+=vec[i]-vec[0];
        }
        cout<<sum<<endl;
        vec.clear();
    }
    return 0;
}