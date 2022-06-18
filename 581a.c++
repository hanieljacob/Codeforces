#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b;
    int min;
    int rem;
    cin>>a>>b;
    if(a>=b){
        min = b;
        rem = ((a+b) - (min*2))/2;
    }
    else{
        min = a;
        rem = ((a+b) - (min*2))/2;
    }
    
    cout<<min<<" "<<rem;
    return 0;

}