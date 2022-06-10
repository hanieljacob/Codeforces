#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    vector<char> s2;
    int count=0;
    int len;
    cin>>s1;
    s2.push_back(s1[0]); 
    for(int i=0;i<s1.length();i++){
        int j;
        for(j=0; j<i;j++){
            if(s1[i] == s1[j])
                break;
            else if(i-1==j)
                s2.push_back(s1[i]); 
        }
    }
    len = s2.size();
    if(len%2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;

}