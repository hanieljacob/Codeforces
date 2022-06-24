#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    int num;
    vector<int> vec;
    cin>>t;
    while(t--){
        int sum=0;
        int count1=0;
        int count2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            if(num==2)
                count2++;
            sum+=num;
            vec.push_back(num);
        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        if(count2 == sum/2 && count2%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

        
    }
    return 0;
}