#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    long a;
    long b;
    long ans;
    int count=0;
    vector<int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a==b)
            vec.push_back(0);
        else if(a>b){
            ans = (a-b)/10;
            if((a-b)%10!=0)
                ans++;
            vec.push_back(ans);
        }
        else{
            ans = (b-a)/10;
            if((b-a)%10!=0)
                ans++;
            vec.push_back(ans);
        } 
    }
    for(auto e: vec)
        cout<<e<<endl;   
    return 0;

}