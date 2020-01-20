#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
vector<string> elimDup(const vector<string> & e)
{
    vector<string> temp=e;
    sort(temp.begin(),temp.end());
    auto pos=unique(temp.begin(),temp.end());
    temp.erase(pos,temp.end());
    return temp;
}
bool isShorter(const string &a,const string&b)
{
    return a.size()<b.size();
}
int main()
{
    vector<string> a{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    for(const auto &i:a)
        cout<<i<<" ";
    cout<<endl;
    vector<string> b=elimDup(a);
    for(const auto &i:b)
        cout<<i<<" ";
    cout<<endl;
    stable_sort(b.begin(),b.end(),isShorter);
    for(const auto &i:b)
        cout<<i<<" ";
    cout<<endl;
}