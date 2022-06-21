#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int a;
    int b;
    int c;
    vector<int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        if(c%a==b)
            vec.push_back(c);
        if(c%a<b)
            vec.push_back(c-(c%a)-(a-b));
        if(c%a>b)
            vec.push_back(c-((c%a)-b));
    }
    for(auto e: vec)
        cout<<e<<endl;
    return 0;
}