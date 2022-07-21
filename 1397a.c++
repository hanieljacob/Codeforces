#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    int n;
    int temp;
    cin>>t;
    while(t--){
        vector<int> vec(26,0);
        int flag=0;
        cin>>n;
        temp = n;
        while(temp--){
            cin>>s;
            for(int i=0;i<s.length();i++)
                ++vec[s[i]-'a'];
        }
            for(auto e: vec){
                if(e%n!=0){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                continue;
            cout<<"YES"<<endl;
    }
    return 0;
}