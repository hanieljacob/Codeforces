#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int up=0;
    int low=0;
    char ch;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=91)
            up++;
        else
            low++;
    }
    if(up>low)
        for(int i=0;i<s.length();i++){
            ch = toupper(s[i]);
            cout<<ch;
        }
    else
        for(int i=0;i<s.length();i++){
            ch = tolower(s[i]);
            cout<<ch;
        }
    return 0;
}