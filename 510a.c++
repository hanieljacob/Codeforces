#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int m;
    char arr[50][50];
    int flag=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                arr[i][j] = '#';
            }
            else{
                if(j==m-1 && flag==0){
                    arr[i][j] = '#';
                    flag=1;
                }
                else if(j==0 && flag==1){
                    arr[i][j] = '#';
                }
                else{
                    arr[i][j] = '.';
                    if(j==m-1)
                        flag=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}