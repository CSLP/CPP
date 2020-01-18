#include<list>
#include<iostream>
#include<vector>
#include<iterator>
using std::vector;
using std::endl;
using std::cout;
using std::list;
using std::begin;
using std::end;
int main()
{
    int ia[]={0,1,1,2,3,5,9,13,21,55,89};
    vector<int> vec(begin(ia),end(ia));
    list<int> lis;
    lis.assign(begin(ia),end(ia));
    for(auto i=vec.cbegin();i!=vec.cend();)
    {
        if(*i%2)   ++i;
        else i=vec.erase(i);
    }
    for(auto  i=lis.begin();i!=lis.end();)
    {
        if(*i%2)  i=lis.erase(i);
        else ++i;
    }
    for(auto i:vec)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:lis)
        cout<<i<<" ";
    cout<<endl;
}