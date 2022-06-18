#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> vec;
    string s1;
    string s2;
    string s3;
    char temp;
    int i;
    cin>>s1>>s2>>s3;
    s1 = s1+s2;
    if(s1.length()!=s3.length()){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s1.length();i++){
        for(int j=i+1;j<s1.length();j++){
            if(s1[i]>s1[j]){
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
    for(int i=0;i<s3.length();i++){
        for(int j=i+1;j<s3.length();j++){
            if(s3[i]>s3[j]){
                temp = s3[i];
                s3[i] = s3[j];
                s3[j] = temp;
            }
        }
    }
    for(i=0;i<s1.length();i++){
        if(s1[i] != s3[i])
            break;
    }
    if(i==s1.length())
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}