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
    vector<int> a{1,2,3,4,5,6,7,8,9,10};
    fill_n(a.begin(),a.size(),0);
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    vector<int> b;
    fill_n(back_inserter(b),30,10);
    for(auto j:b)
        cout<<j<<" ";
    cout<<endl;
}