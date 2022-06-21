#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int> vec;
    vector<int> ai;
    vector<int> bi;
    vector<int> ci;
    int num;
    int a=0;
    int b=0;
    int c=0;
    int min;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
        if(num==1){
            a++;
            ai.push_back(i+1);
        }
        else if(num==2){
            b++;
            bi.push_back(i+1);
        }
        else{
            c++;
            ci.push_back(i+1);
        }
    }
    if(a<b && a<c)
        min = a;
    else if(b>c)
        min = c;
    else
        min = b;
    cout<<min<<endl;
    for(int i=0;i<min;i++){
        cout<<ai[i]<<" "<<bi[i]<<" "<<ci[i]<<endl;
    }
    return 0;
}