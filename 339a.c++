#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    vector<int> numbers;
    vector<string> answer;
    int count=0;
    cin>>s;
    for(int i=0;i<s.length();i+=2)
        numbers.push_back(s[i]-48);
    sort(numbers.begin(), numbers.end());
    for(int e: numbers){
        answer.push_back(to_string(e));
        answer.push_back("+");
    }
    answer.erase(answer.end());
    for(auto e: answer)
        cout<<e;
    return 0;

}