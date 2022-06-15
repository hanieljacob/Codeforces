#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int h;
    int height;
    int sum=0;
    cin>>n;
    cin>>h;
    for(int i=0;i<n;i++){
        cin>>height;
        if(height>h)
            sum+=2;
        else
            sum++;
    }
    cout<<sum;
    return 0;
}