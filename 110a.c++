#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int count=0;
    int rem;
    cin>>n;
    while(n!=0){
        rem = n%10;
        if(rem == 4 || rem==7)
            count++;
        n = n/10;
    }
    if(count==4 || count== 7)
        cout<<"YES";
    else
        cout<<"NO"; 
    return 0;
}