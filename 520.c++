#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    int flag=0;
    char ch;
    cin>>n>>s;
    if(n<26){
        cout<<"NO";
        return 0;
    }
    for(char ch='a'; ch<='z'; ch++){
        flag=0;
        for(int i=0;i<n;i++){
            if(ch == tolower(s[i])){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;

}