#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int num;
    double sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        sum+=num;
    }
    cout<<setprecision(14)<<sum/n;
    return 0;

}