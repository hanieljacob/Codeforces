#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    vector<int> vec;
    cin>>t;
    while(t--){
        int num;
        int count2=0;
        int N1=0;
        int flag=0;
        int j=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            vec.push_back(num);
        }
        if(count(vec.begin(),vec.end(),1)==1){
                cout<<0<<endl;
                vec.clear();
                continue;
        }
        for(j=n-1;j>0;j--){
            if(vec[j]==1)
                break;
        }
        for(int i=0;i<j;i++){
            if(vec[i]==1){
                flag=1;
                N1++;
            }
            else if(flag==1){ 
                count2++;
            }
            else
                flag=0;
        }
        cout<<count2<<endl;
        vec.clear();
        
    }
    return 0;
}