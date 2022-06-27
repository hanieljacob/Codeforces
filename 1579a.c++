#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int count=0;
        cin>>s;
        if(s.length()%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        else
            for(int i=0;i<s.length();i++)
                if(s[i]=='B')
                    count++;
        if(count==s.length()/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}