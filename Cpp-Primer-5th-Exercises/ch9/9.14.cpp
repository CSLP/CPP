#include<iostream>
#include<vector>
#include<list>
#include<string>
using std::string;
using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    vector<int> a={1,2,3,4,5,6,7,8,9,10};
    vector<int> b={1,2,3};
    list<int> c={1,2,3,4,5};
    list<char*> d={"nimasi","file","edit","selection","go","view","go"};
    vector<string> e;
    b.swap(a);
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    a=b;
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    c.assign(b.begin(),b.end());
    for(auto i:c)
        cout<<i<<" ";
    cout<<endl;
    e.assign(d.begin(),d.end());
    for(auto &i:e)
        cout<<i<<" ";
    cout<<endl;
    
}