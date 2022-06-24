#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    long long arr[2][50];
    cin>>t;
    while(t--){
        long long count=0;
        long long mina = INT_MAX;
        long long minb = INT_MAX;
        cin>>n;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(i==0){
                    if(mina>arr[i][j])
                        mina = arr[i][j];
                }
                else
                    if(minb>arr[i][j])
                        minb = arr[i][j];
            }
        }
        for(int j=0;j<n;j++){
            if(arr[0][j]>mina && arr[1][j] > minb){
                count+=arr[0][j] - mina;
                arr[1][j] = arr[1][j] - (arr[0][j] - mina);
                if(arr[1][j]<=0)
                    arr[1][j] = arr[1][j] + abs(arr[1][j]) + 1;
            }
            else if(arr[0][j]>mina)
                count+=arr[0][j] - mina;
            else
                continue;
        }
        for(int j=0;j<n;j++){
            if(arr[1][j] > minb){
                count+=arr[1][j] - minb;
        }
        }
        cout<<count<<endl;
    }
    return 0;
}