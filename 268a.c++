#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int arr[100][2];
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i!=j){
                    if(arr[i][0] == arr[j][1])
                        count++;
                }
        }
    }
    cout<<count;
    return 0;

}