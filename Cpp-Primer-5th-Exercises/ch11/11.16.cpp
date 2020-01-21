#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
    map<string,int> test;
    string a;int b;
    while(cin>>a>>b)
    {
        auto pos=test.find(a);
        if(pos!=test.end())
            pos->second=b;
        else
        {
            test.insert({a,b});
        }
    }
    for(auto i=test.begin();i!=test.end();++i)
        cout<<i->first<<":"<<i->second<<endl;
}
