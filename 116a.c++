#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[1000][1000];
    vector<int> cap;
    int tot=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++){
            tot = tot - arr[i][0] + arr[i][1];
            cap.push_back(tot);
    }
    sort(cap.begin(),cap.end(), greater<int>());
    cout<<cap.front();
    return 0;
}