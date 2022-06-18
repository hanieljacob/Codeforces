#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int num;
    int count=0;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    int max = vec[0];
    int min = vec[0];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(vec[i]>max){
                max = vec[i];
                count++;
            }
            else if(vec[i]<min){
                min = vec[i];
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}