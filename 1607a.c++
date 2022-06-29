#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> vec;
        string s1;
        string s2;
        int sum=0;
        cin>>s1>>s2;
        for(int i=0;i<s2.length();i++){
            for(int j=0;j<s1.length();j++){
                if(s2[i] == s1[j]){
                    vec.push_back(j);
                    continue;
                }
            }
        }
        for(int i=0;i<vec.size()-1;i++)
            sum+=abs(vec[i]-vec[i+1]);
    cout<<sum<<endl;        
    }
    return 0;
}