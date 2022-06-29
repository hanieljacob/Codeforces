#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long num;
    long long num2;
    int count=1;
    int max=0;
    cin>>n;
    cin>>num;
    for(long long i=1;i<n;i++){
        cin>>num2;
        if(num2>num){ 
            count++;
            num = num2;
        }
        else{
            if(count>max)
                max=count;
            count=1;    
            num=num2;
        }
    }
    if(count>max)
        max=count;
    cout<<max;
    return 0;
}