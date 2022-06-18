#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int count=0;
    vector<char> vec;
    vector<char> vec2;
    getline(cin,s);
    if(s.length()==2){
        cout<<"0";
        return 0;
    }
    for(int i=1;i<s.length();i=i+3)
        vec.push_back(s[i]);
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]==vec[i+1])
            count--;
        count++;
    }
    cout<<count+1;
    return 0;
}