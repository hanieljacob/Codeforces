#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    string s2;
    cin>>s1>>s2;
    int res=0;
    for(int i=0, j=0;i<s1.length();i++,j++){
        if(toupper(s1[i]) > toupper(s2[j])){
            res=1;
            break;
        }
        if(toupper(s1[i]) < toupper(s2[j])){
            res=-1;
            break;
        }
    }
    cout<<res;
    return 0;

}