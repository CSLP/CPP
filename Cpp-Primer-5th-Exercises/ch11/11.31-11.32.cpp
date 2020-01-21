#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
    multimap<string,string> ss;
    for(string author,book;cin>>author>>book;ss.insert({author,book})){};
    auto res=ss.find("LP");
    auto n=ss.count("LP");
    if(res!=ss.end())
    {
        while(n)
        {
            res=ss.erase(res);
            --n;
        }
    }
    for(auto low=ss.lower_bound("CSLP"),up=ss.upper_bound("CSLP");low!=up;)
        low=ss.erase(low);
    for(auto lowUp=ss.equal_range("ZYH");lowUp.first!=lowUp.second;)
        lowUp.first=ss.erase(lowUp.first);
    for(const auto &i:ss)
    {
        cout<<i.first<<":"<<i.second<<endl;
    }
}