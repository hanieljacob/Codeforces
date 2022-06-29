#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int temp;
    vector<int> vec;
    cin>>t;
    while(t--){
        cin>>n;
        int count=n;
        for(int i=0;i<n;i++){
            cin>>temp;
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end());
        vector<int>::iterator it;
        for(it = vec.begin(); it!=vec.end()-1;it++){
            if(*it== *(it+1)){
                count--;
            }
        } 
        cout<<count<<endl;
        vec.clear();
    }
    return 0;
}