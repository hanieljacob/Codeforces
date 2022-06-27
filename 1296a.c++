#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[2000];
        int oddCount=0;
        int eveCount=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0)
                oddCount++;
            else
                eveCount++;
        }
        if(eveCount>0 && oddCount>0)
            cout<<"YES"<<endl;  
        else if(oddCount>0 && n%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}