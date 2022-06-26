#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int num;
    int flag=0;
    vector<int> vec;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>num;
            for(auto e: vec)
                if(e==num)
                    flag=1;
            if(flag==0)
                vec.push_back(num);
            flag=0;
        }
        for(auto e: vec)
            cout<<e<<" ";
        cout<<endl; 
        vec.clear();
    }
    return 0;
}