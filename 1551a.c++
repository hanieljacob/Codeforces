#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    long n;
    long c1;
    long c2;
    cin>>t;
    while(t--){
        cin>>n;
        c1 = n/3;
        c2 = n/3;
        if(n-(c1+(2*c2))==1)
            c1++;
        if(n-(c1+(2*c2))==2)
            c2++;
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}