#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string a;int b;
    vector<pair<string,int>> x;
    while(cin>>a>>b)
    {
        x.push_back({a,b});
        x.push_back(pair<string,int>(a,b));
        x.push_back(make_pair(a,b));
    }
    for(const auto &i:x)
        cout<<i.first<<":"<<i.second<<endl;
}