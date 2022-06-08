#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s[100];
    string ans[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++){
        if(s[i].length() > 10){
             ans[i] = s[i][0] + to_string(s[i].length()-2) + s[i][s[i].length()-1];
        }
        else
            ans[i] = s[i];
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<endl;
    return 0;
}