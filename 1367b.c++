#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int arr[40];
    int n;
    cin>>t;
    while(t--){
        int count=0;
        int temp;
        int flag=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++){
            if(i%2==0 && arr[i]%2!=0){
                int j=i+1;
                while(j<n){
                    if(arr[j]%2==0){
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        count++;
                        break;
                    }
                    j+=2;
                }
                if(j>=n){
                    cout<<-1<<endl;
                    flag=1;
                    break;
                }
            }
            else if(i%2==1 && arr[i]%2!=1){
                int j=i+1;
                 while(j<n){
                    if(arr[j]%2!=0){
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        count++;
                        break;
                    }
                    j+=2;
                }
                if(j>=n){
                    cout<<-1<<endl;
                    flag=1;
                    break;
                }

            }
        }
        if(flag==0)
            cout<<count<<endl;
    }
    return 0;
}