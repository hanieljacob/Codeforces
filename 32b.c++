#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string ans = "";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == '-' && s[i+1] == '-'){
            ans+="2";
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            ans+="1";
            i++;
        }
        else
            ans+="0";
    }
    cout<<ans;
    return 0;
}