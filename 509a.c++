#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int n1;
    int sum=0;
    int sum2=0;
    int arr[10][10];
    cin>>n;
    if(n==1)
        cout<<1;
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
        cout<<arr[n-1][n-1];
    }
    return 0;
}