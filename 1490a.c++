#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int arr[50];
    int a;
    int b;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0; i< n-1; i++){
            int low=min(arr[i],arr[i+1]);
            int high=max(arr[i],arr[i+1]);
            while(high > 2*low){
                low*=2;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}