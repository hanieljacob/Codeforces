#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        int num;
        int maxele=0;
        int minele=INT_MAX;
        int maxi;
        int mini;
        int sum=0;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++){
            cin>>num;
            vec.push_back(num);
            if(num>maxele){
                maxele=num;
                maxi = i;
            }
            if(num<minele){
                minele=num;
                mini = i;
            }
        }
        cout << min({max(maxi, mini) + 1,(n - 1) - min(maxi, mini) + 1,(n - 1) - maxi + mini + 2,(n - 1) - mini + maxi + 2})<<"\n";
    }
    return 0;
}