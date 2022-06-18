#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    long n;
    vector<long> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%2==0)
            vec.push_back((n/2)-1);
        else
            vec.push_back(n/2);
    }
    for(auto e: vec)
        cout<<e<<endl;
    return 0;

}