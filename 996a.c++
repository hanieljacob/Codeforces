#include<bits/stdc++.h>
using namespace std;
int main() {
    long n;
    long a;
    long b;
    long c;
    long d;
    long e;
    cin>>n;
    a = n/100;
    b = (n%100)/20;
    c = ((n%100)%20)/10;
    d = (((n%100)%20)%10)/5;
    e = ((((n%100)%20)%10)%5)/1;
    cout<<a+b+c+d+e;
    return 0;
}