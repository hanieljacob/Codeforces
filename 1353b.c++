#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int k;
    int num;
    int l;
    int sum=0;
    vector<int> a;
    vector<int> b;
    vector<int> ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        for(int j=0;j<n;j++){
            cin>>num;
            a.push_back(num);
        }
        for(int j=0;j<n;j++){
            cin>>num;
            b.push_back(num);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        l=0;
        while(k--){
            if(a[l]<b[l]){
                a[l] = b[l];
                l++;
            }
        }
        for(auto e: a)
            sum+=e;
        ans.push_back(sum);
        sum=0;
        a.clear();
        b.clear();
    }
    for(auto e: ans)
        cout<<e<<endl;
    return 0;
}