#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    string s;
    vector<string> vec;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        bool seen[26] = {0};
        bool ans = true;
        for(int i=0;i<n;i++){
            if(i==0 || s[i-1]!=s[i]){
                if(seen[s[i]-'A']){
                    ans = false;
                    break;
                }
                else
                    seen[s[i]-'A'] = true;
            }
        }
        vec.push_back((ans ? "YES":"NO"));
    }
    for(auto e: vec)
        cout<<e<<endl;
    return 0;
}