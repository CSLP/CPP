#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<numeric>
using std::list;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    vector<string> a={"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    sort(a.begin(),a.end());
    for(const auto &i:a)
        cout<<i<<" ";
    cout<<endl;
    auto pos=unique(a.begin(),a.end());
    cout<<endl;
    for(const auto &i:a)
        cout<<i<<" ";
    cout<<endl;
    a.erase(pos,a.end());
    for(const auto &i:a)
        cout<<i<<" ";
    cout<<endl;
    vector<int> b{1,2,3,5,9,9,5,50,15,235,9,0,3,2,1};
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
    sort(b.begin(),b.end());
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
    auto p=unique(b.begin(),b.end());
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
    b.erase(p,b.end());
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
}