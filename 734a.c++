#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    string s;
    cin>>n>>s;
    int a=0;
    int d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}