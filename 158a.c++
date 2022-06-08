    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        int n;
        int k;
        vector<int> participants;
        int i;
        int val;
        int count=0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>val;
            participants.push_back(val);
        }
        k = participants[k-1];
        sort(participants.begin(),participants.end(), greater<int>());
        for(auto e: participants){
            if(e>=k && e>0)
                count++;
        }
        cout<<count;
        return 0;

    }