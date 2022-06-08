#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int sum=0;
    int count=0;
    int mat[100][100];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin>>mat[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            sum+=mat[i][j];
        }
        if(sum>=2)
            count++;
        sum = 0;
    }
    cout<<count;
    return 0;
}