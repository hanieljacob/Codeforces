#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int num;
    int j;
    vector<int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>num;
        for(j=0;j<1666;j++){
            if((j+1)%3==0 || (j+1)%10==3)
                continue;
            else
                num--;
            if(num==0)
                break;
            }
        vec.push_back(j+1);
    }
    for(auto e: vec)
        cout<<e<<endl;
    return 0;
}