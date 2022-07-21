#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int flag=0;
    vector<string> vec;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s[0] == 'O' && s[1] == 'O' && flag==0){
            s[0] = '+';
            s[1] = '+';
            flag=1;
            vec.push_back(s);   
        }
        else if(s[3] == 'O' && s[4] == 'O' && flag==0){
            s[3] = '+';
            s[4] = '+';
            flag=1;
            vec.push_back(s);
        }
        else
            vec.push_back(s);
    }
    if(flag==1){
        cout<<"YES"<<endl;
        for(auto e: vec)
            cout<<e<<endl;
    }
    else
        cout<<"NO";
    return 0;
}