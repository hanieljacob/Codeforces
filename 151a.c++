#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec;
    int d;
    int l;
    int s;
    int num;
    int min=1000;
    for(int i=0;i<8;i++){
        cin>>num;
        vec.push_back(num);
    }   
    d = (vec[1]*vec[2])/vec[6];
    l = vec[3]*vec[4];
    s = vec[5]/vec[7];
    if(d<min)
        min=d;
    if(l<min)
        min=l;
    if(s<min)
        min=s;
    cout<<min/vec[0];
    return 0;
}