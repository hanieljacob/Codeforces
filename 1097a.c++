#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s2;
    int i;
    cin>>s;
    for(i=0;i<5;i++){
        cin>>s2;
        if(s[0]==s2[0] || s[1]==s2[1])
            break;
    }
    if(i==5)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
