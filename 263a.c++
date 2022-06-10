#include<bits/stdc++.h>
using namespace std;
int main() {
    int mat[5][5];
    int flag=0;
    int count=0;
    int i;
    int j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                flag = 1;
                break;   
            }
        }
        if (flag==1)
            break;
    }
    if(i==3 || i==1)
        count++;
    if(i==4 || i==0)
        count = count+2;
    if(j==3 || j==1)
        count++;
    if(j==4 || j==0)
        count = count+2;
    cout<<count;
    return 0;

}