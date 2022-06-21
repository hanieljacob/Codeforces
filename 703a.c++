#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int arr[100][2];
    int m=0;
    int c=0;
    int t=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++){
        if(arr[i][0]>arr[i][1])
            m++;
        else if(arr[i][0]<arr[i][1])
            c++;
        else
            t++;
    }
    if(m>c)
        cout<<"Mishka";
    else if(m<c)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
    return 0;

}