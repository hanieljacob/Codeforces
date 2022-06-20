#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    int flag=0;
    int size;
    vector<int> vec;
    vector<vector<int>> ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%4!=0){
            ans.push_back(vec);
            continue;
        }
        else{
            for(int j=2;j<=n;j+=2)
                vec.push_back(j);
            size = vec.size();
            for(int k=0;k<size;k++){
                if(k==size-1)
                    vec.push_back(vec[k]+k);
                else
                    vec.push_back(vec[k]-1);
            }
        }
        ans.push_back(vec);
        vec.clear();
    }
    for(auto e: ans){
        if(e.size()==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        for(auto e1: e){
            cout<<e1<<" ";
        }
        if(e.size()!=0)
        cout<<endl;
    }
    return 0;
}