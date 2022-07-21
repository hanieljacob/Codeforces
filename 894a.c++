#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){ 
        if(s[i] == 'Q'){
            for(int j=i;j<s.length();j++){
                if(s[j] == 'A'){
                    for(int k=j;k<s.length();k++){
                        if(s[k] == 'Q')
                            count++;
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}