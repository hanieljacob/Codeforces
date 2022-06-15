#include<bits/stdc++.h>
using namespace std;

bool findDistinct(vector<int> vec){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(vec[i]==vec[j]){
                return false;
            }
        }
    }
    return true;
}

bool split(int y, vector<int> vec){
    int rem;
    while(y!=0){
        rem = y%10;
        vec.push_back(rem);
        y=y/10;
    }
    sort(vec.begin(),vec.end());
    return findDistinct(vec);
}



int main(){
    int y;
    vector<int> vec;
    cin>>y;
    while(true){
        if(split(y+1, vec))
            break;
        else
            vec.clear();
        y++;
    }
    cout<<y+1;
    return 0;
}