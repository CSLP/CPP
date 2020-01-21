#include<iostream>
#include<map>
#include<fstream>
#include<vector>
using namespace std;
void addFamily(map<string,vector<string>> & f,string a,const vector<string> &child)
{   
    for(const auto&i:child)
        f[a].push_back(i);
}
int main()
{
    map<string,vector<string>> family;
    vector<string> child={"skf","msfy","nmsl"};
    vector<string> ch={"XJP","TLP"};
    addFamily(family,"Lp",child);
    addFamily(family,"Lp",ch);
    for(const auto &i: family)
    {
        cout<<i.first<<":";
        for(const auto &j:i.second)
            cout<<j<<" ";
        cout<<endl;
    }
}