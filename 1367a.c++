#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    vector<string> vec;
    string s;
    string temp;
    int flag=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        string temp = string(1,s[0]) + s[1];
        if(s.length()==2)
            vec.push_back(temp); 
        else{
            for(int j=3;j<s.length();j+=2)
                temp = temp + s[j];
            vec.push_back(temp);
        }
    }
    for(auto e: vec)
        cout<<e<<endl;
    return 0;
    
}