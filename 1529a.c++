#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double n;
    double num;
    vector<double> vec;
    cin>>t;
    while(t--){
        double sum=0;
        int count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end());
        int i=0;
        while(i<n and vec[i]==vec[0]){
            i++;
        }
        cout<<n-i;
        cout<<endl;
        vec.clear();
    }
    return 0;
}