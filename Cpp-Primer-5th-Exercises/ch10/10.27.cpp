#include<iostream>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>
using std::list;
using std::vector;
using std::cout;
using std::endl;
int main()
{
    vector<int> a{1,2,3,3,4,4,5,5,7,9,2,3,4,5,5,1,3,3,6,9,8,6,7,6,8};
    list<int> b;
    sort(a.begin(),a.end());
    unique_copy(a.begin(),a.end(),back_inserter(b));
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
    vector<int> c{1,2,3,4,5,6,7,8,9,10};
    list<int> x,y,z,j;
    copy(c.begin(),c.end(),front_inserter(x));
    copy(c.begin(),c.end(),back_inserter(y));
    copy(c.begin(),c.end(),inserter(z,z.begin()));
    copy(c.begin(),c.end(),inserter(j,j.end()));
    for(auto i:x)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:y)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:z)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:j)
        cout<<i<<" ";
    cout<<endl;
}