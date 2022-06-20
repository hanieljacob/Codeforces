#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int num;
    int temp;
    int count=0;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]>vec[j]){
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    for(int i=0;i<vec.size()-1;i++)
        count+=vec[vec.size()-1] - vec[i];
    cout<<count;
    return 0;
}