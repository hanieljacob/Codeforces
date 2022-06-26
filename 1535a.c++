#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int num;
    cin>>t;
    vector<int> vec;
    vector<int> vec2;
    while(t--){
        int f1=0;
        int f2=0;
        int max1=0;
        int max2=0;
        for(int i=0;i<4;i++){
            cin>>num;
            vec.push_back(num);
        }
        vec2 = vec;
        sort(vec.begin(),vec.end());
        f1 = vec[3];
        f2 = vec[2];
        if(vec2[0]>vec2[1])
            max1 = vec2[0];
        else
            max1 = vec2[1];
        if(vec2[2]>vec2[3])
            max2 = vec2[2];
        else
            max2 = vec2[3];
        if((max1 == f1 || max1 == f2) && (max2 == f1 || max2 == f2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        vec.clear();
    }
    return 0;
}