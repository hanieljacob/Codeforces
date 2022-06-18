#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    vector<int> vec;
    int num;
    int rem;
    int NoD = 0;
    int j=0;
    int k=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>num;
        vec.push_back(num);
    }
    for(auto e: vec){
        while(e!=0){
            rem = e%10;
            if(rem!=0){
                vec.push_back(rem*pow(10,j));
                NoD++;
            }
            e = e/10;
            j++;
        }
        j=0;
        cout<<NoD<<endl;
        for(int i=0;i<NoD;i++){
            cout<<vec[t+k]<<" ";
            k++;
        }
        cout<<endl;
        NoD=0;
    }
    return 0;

}