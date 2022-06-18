#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string,int> shapes;
    vector<string> str;
    int n;
    int sum=0;
    string s;
    shapes.insert(pair<string,int>("Tetrahedron", 4));
    shapes.insert(pair<string,int>("Cube", 6));
    shapes.insert(pair<string,int>("Octahedron", 8));
    shapes.insert(pair<string,int>("Dodecahedron", 12));
    shapes.insert(pair<string,int>("Icosahedron", 20));
    cin>>n;
    map<string, int>::iterator itr;
    for(int i=0;i<n;i++){
        cin>>s;
        for(itr = shapes.begin(); itr != shapes.end(); itr++){
            if(itr->first == s)
                sum += itr->second;
        }
    }
    cout<<sum;
    return 0;
}   