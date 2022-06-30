#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int d;
        int num;
        vector<int> vec;
        cin>>n>>d;
        int temp=n;
        while(temp--){
            cin>>num;
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end());
        if(vec[n-1] <= d)
            cout<<"YES"<<endl;
        else if(vec[1]+vec[0]>d)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        vec.clear();
    }
    return 0;
}