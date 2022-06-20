#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    int arr[50];
    int j=0;
    vector<int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        if(n==1){
            vec.push_back(1);
            continue;
        }
        sort(arr,arr+n);
        int k=0;
        for(;k<n-1;k++){
            if(arr[k]==arr[k+1] || arr[k+1]-arr[k] == 1)
                continue;
            else
                break;
        }
        if(k==n-1)
            vec.push_back(1);
        else
            vec.push_back(0);
    }
    for(auto e: vec)
        if(e==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;

}