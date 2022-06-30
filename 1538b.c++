#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int num;
        int n;
        int flag=0;
        int count=0;
        int count2=0;
        vector<int> vec;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            vec.push_back(num);
            sum+=num;
        }
        for(auto e: vec)
            if(e==num)
                count++;
        if(n==1||count==n){
            cout<<0<<endl;
            vec.clear();
            continue; 
        }
        else if(sum%n!=0){
            cout<<-1<<endl;
            vec.clear();
            continue;
        }
        else{
            vector<int> vec2;
            sort(vec.begin(),vec.end());
            for(auto e: vec)
                vec2.push_back((sum/n)-e);
            for(auto e:vec2){
                if(e<0)
                    count2++;
            }
            cout<<count2<<endl;
            
        }

        } 
    return 0;
}