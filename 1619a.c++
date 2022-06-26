#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        int j=0;
        cin>>s;
        if(s.length()%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(int i=0;i<s.length()/2;i++)
                if(s[i] == s[s.length()/2 + j])
                    j++;
            if(j==s.length()/2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}