#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int sum=0;
    cin>>s;
    if(s[0]-'a'>13)
        sum += 26 - (s[0]-'a');
    else
        sum += s[0]-'a';
    for(int i=0;i<s.length()-1;i++){
        if(abs(s[i]-s[i+1])>13)
            sum+= 26 - abs(s[i]-s[i+1]);
        else
            sum+= abs(s[i]-s[i+1]);
    }
    cout<<sum<<endl;
    return 0;
}