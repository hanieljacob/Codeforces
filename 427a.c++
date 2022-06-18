#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int sum=0;
    int count=0;
    vector<int> vec;
    int num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    for(auto e: vec){
        if (e==-1 && sum<=0)
            count++;
        else if(e==-1)
            sum--;
        else
            sum+=e;
    }
    cout<<count;
    return 0;

}