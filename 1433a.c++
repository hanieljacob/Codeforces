#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int num;
    int a;
    int rem;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>num;
        a = (num%10 - 1) * 10;
        int b=0;
        while(num!=0){
            num = num /10;
            b++;
        }
        if(b==1)
            cout<<a+1<<endl;
        else if(b==2)
            cout<<a+3<<endl;
        else if(b==3)
            cout<<a+6<<endl;
        else
            cout<<a+10<<endl;
    }
    return 0;
}