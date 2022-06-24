#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1;
    int a2;
    int a3;
    int a4;
    int count=0;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == '1')
            count+=a1;
        else if(s[i] == '2')
            count+=a2;
        else if(s[i] == '3')
            count+=a3;
        else
            count+=a4;
    }
    cout<<count;
    return 0;
}