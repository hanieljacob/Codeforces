#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    char ch;
    cin>>t;
    while(t--){
        int flag=0;
        cin>>s;
        cin>>ch;
        if(s.length()%2==0)
            cout<<"NO"<<endl;
        else{
            for(int i=0;i<s.length();i++){
                if(s[i]==ch){
                    if(i%2==0){
                        cout<<"YES"<<endl;  
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}