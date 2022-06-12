#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    char temp;
    string s;
    cin>>n>>t>>s;
    for(int i=0;i<t;i++)
        for(int j=0;j<n;){
            if(s[j]=='B' && s[j+1] == 'G'){
                s[j] = 'G';
                s[j+1] = 'B';
                // temp = 'B';
                // s[j] = s[j+1];
                // s[j+1] = temp;
                j=j+2;
            }
            else
                j++;
        }
    for(int i=0;i<n;i++)
        cout<<s[i];
    return 0;
}