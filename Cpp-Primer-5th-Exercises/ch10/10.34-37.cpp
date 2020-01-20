#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    vector<int> a{1,2,3,4,5,6,7,8,9,10};
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    for(auto i=a.crbegin();i!=a.crend();++i)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=--a.cend();i+1!=a.cbegin();--i)
        cout<<*i<<" ";
    cout<<endl;
    vector<int> b{0,2,3,4,0,5,9,0,3,2};
    auto pos=find(b.rbegin(),b.rend(),0);
    cout<<pos.base()-1-b.begin()<<endl;
    cout<<*pos<<" "<<*++pos<<endl;

    list<int> c;
    list<int> d;
    // copy((a.begin()+7).base(),(a.begin()+3).base(),back_inserter(c));
    copy(a.rbegin()+2,a.rbegin()+7,back_inserter(c));
    copy(a.begin()+3,a.begin()+8,front_inserter(d));
    for(auto i:c)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
}