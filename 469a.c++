#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p;
    int q;
    int num;
    int i;
    int flag=0;
    vector<int> vec;
    cin>>n>>p;
    for(int i=0;i<p;i++){
        cin>>num;
        vec.push_back(num);
    } 
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>num;
        vec.push_back(num);
    } 
    for(i=1;i<=n;i++){
        for(auto e: vec){
            if(i==e){
                flag=1;
                break;
            }
        }
        if(flag==0)
            break;
        flag=0;    
    }
    if(i==n+1)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}