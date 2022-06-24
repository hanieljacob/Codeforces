#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    char ch;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>ch;
            if(ch=='C'||ch=='M'||ch=='Y'){
                cout<<"#Color";
                return 0;
            }
        }
    cout<<"#Black&White";
    return 0;
}