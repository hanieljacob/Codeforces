#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    string b;
    string c="";
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i] == b[i])
            c+="0";
        else
            c+="1";
    }
    cout<<c;
    return 0;
}