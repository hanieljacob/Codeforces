#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int num;
    int sum1=0;
    int sum2=0;
    int j=0;
    vector<int> vec;
    cin>>n;
    int k=n-1;
    for(int i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(vec[j]>=vec[k]){
                sum1+=vec[j];
                j++;
            }
            else{
                sum1+=vec[k];
                k--;
            }
        }
        else{
            if(vec[j]>=vec[k]){
                sum2+=vec[j];
                j++;
            }
            else{
                sum2+=vec[k];
                k--;
            }
        }
    }
    cout<<sum1<<" "<<sum2;
}