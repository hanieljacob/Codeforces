#include<bits/stdc++.h>
using namespace std;
int main() {
    int y;
    int w;
    int max;
    int count=0;
    int dem=6;
    cin>>y>>w;
    if(y>=w)
        max = y;
    else
        max = w;
    for(int i=max;i<=6;i++)
        count++;
    if(count%2==0){
        count = count/2;
        dem = dem/2;
    }
    if(count%3==0){
        count = count/3;
        dem = dem/3;
    }
    cout<<to_string(count) + "/" + to_string(dem);
    return 0;
}