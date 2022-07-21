#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s1;
    string s2;
    int sum=0;
    cin>>n>>s1>>s2;
    for(int i=0;i<n;i++){
        if(abs((int)s1[i]- (int)s2[i])>5)
            sum+=10-abs((int)s1[i]- (int)s2[i]);
        else
            sum+=abs((int)s1[i]- (int)s2[i]);
    }
    cout<<sum;
    return 0;
}