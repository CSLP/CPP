#include<iostream>
#include<vector>
using std::vector;
using std::endl;
using std::cout;
int main()
{
    vector<int> a;
    vector<int> b{1,2,3,4,5,6,7,8,9,10};
    // cout<<a.at(0)<<endl;
    cout<<a[0]<<endl;
    auto i=a.begin();
    cout<<*i<<endl;
    cout<<a.front()<<endl;
    cout<<b.at(0)<<endl;
    cout<<b[0]<<endl;
    auto j=b.begin();
    cout<<*j<<endl;
    cout<<b.front()<<endl;
}