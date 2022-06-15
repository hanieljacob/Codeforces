#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ch;
    int i=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ch;
        if(ch==1)
            break;
    }
    if(n==i)
        cout<<"Easy";
    else
        cout<<"Hard";
    return 0;
}