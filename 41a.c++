#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    string t2;
    string s;
    int count=0;
    int i=0;
    cin>>t>>s;
    for(int j=t.length()-1; i<t.length();i++, j--){
        if(t[j]!=s[i])
         break;
    }
    if(i==t.length())
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}