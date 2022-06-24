#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int num;
    int min =INT_MAX;
    vector<int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>num;
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end());
        for(int j=n-1;j>0;j--){
            if(min>vec[j]-vec[j-1]){
                min = vec[j] - vec[j-1];
            }
        }
        cout<<min<<endl;
        min = INT_MAX;
        vec.clear();
    }
    return 0;
}