#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    int num;
    int rep;
    vector<int> vec;
    vector<int> ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>num;
            vec.push_back(num);
        }
        if(vec[0]==vec[1])
            rep=vec[0];
        else{
            if(vec[0]==vec[2])
                rep=vec[0];
            else 
                rep = vec[1];
        }
        for(int k=0;k<vec.size();k++){
            if(vec[k]!=rep)
                ans.push_back(k+1);
        } 
        vec.clear();   
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}