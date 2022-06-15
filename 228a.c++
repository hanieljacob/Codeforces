#include<bits/stdc++.h>
using namespace std;
int main() {
    long s[4];
    int temp;
    int count=0;
    for(int i=0;i<4;i++)
        cin>>s[i];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(s[i]>s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i=0;i<4;i++){
        if(s[i]==s[i+1]){
                count++;
            }    
    }
    cout<<count;
    return 0;
}