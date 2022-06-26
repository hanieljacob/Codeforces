#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i=1;
    int sum=1;
    int sum2=0;
    int count=0;
    vector<int> vec;
    cin>>n;
    while(n>=sum2){
        sum = (i*(i+1))/2;
        sum2 += sum;
        i++;
        count++;
    }
    cout<<count-1;
    return 0;
}