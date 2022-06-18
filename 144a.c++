#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     int temp;
//     int arr[100];
//     int arr2[100];
//     int min;
//     int max;
//     int count=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     for(int i=0;i<n;i++)
//         arr2[i] = arr[i];
//     for(int i=0;i<n-1;i++){
//         if(arr2[i] > arr2[i+1]){
//             temp = arr2[i];
//             arr2[i] = arr2[i+1];
//             arr2[i+1] = temp;
//         }
//     }
//     max = arr2[n-1];
//     for(int i=0;i<n-1;i++){
//         if(arr2[i] < arr2[i+1]){
//             temp = arr2[i];
//             arr2[i] = arr2[i+1];
//             arr2[i+1] = temp;
//         }
//     }
//     min = arr2[n-1];
//     if(!(arr[0]==max && arr[n-1]==min)){
//     for(int i=0;i<n;i++){
//         if(arr[i]==max){
//             for(int j=i; j>0;j--){
//                 temp = arr[j];
//                 arr[j] = arr[j-1];
//                 arr[j-1] = temp;
//                 count++;
//             }
//             break;  
//         }
//     }
//     for(int i=n-1;i>=0;i--){
//         if(arr[i]==min){
//             count = count + (n-i-1);
//             break;
//         }
//     }
//     }
//     cout<<count;
//     return 0;
// }
int main(){
    int n;
    int num;
    int max=0;
    int maxindex=100;
    int min=1000;
    int minindex=100;
    cin>>n; 
    for(int i=0;i<n;i++){
        cin>>num;
        if(num>max){
            max = num;
            maxindex = i;
        }
        if(num<=min){
            min = num;
            minindex = i;
        }
    }
    if(maxindex>minindex)
        cout<<maxindex-1 + (n-minindex) - 1;
    else
        cout<<maxindex-1 + (n-minindex);
    return 0;
}