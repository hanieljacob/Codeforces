#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k;
    vector<int> vec;
    int num;    
    int count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i+=3){
        if((i+2) >= n)
            break;
        if(vec[i+2]<=5-k){
            count++;
        }
    }
    cout<<count;
    return 0;
}
