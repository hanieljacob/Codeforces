#include<bits/stdc++.h>
using namespace std;
int main() {
    int x=0;
    int n;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str[1] == '+')
            x++;
        else
            x--;
    }
    cout<<x;
    return 0;
}   