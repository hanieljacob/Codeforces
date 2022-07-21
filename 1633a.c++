#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num%7==0)
            cout<<num<<endl;
        else{
            if((num-(num%7))%10 < num%10)
                cout<<num-num%7<<endl;
            else
                cout<<num + (7 - num%7)<<endl;
        }
    }
    return 0;
}