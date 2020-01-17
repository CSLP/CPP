#include<iostream>
#include<vector>
#include<list>
using std::vector;
using std::list;
using std::cout;
using std::endl;
int main()
{
    list<int> x={1,2,3,4,5,6,7,8,9,10};
    vector<int> a={1,2,3,4,5,6,7,8,9,10};
    vector<double> y(x.begin(),x.end());
    vector<double> b(a.begin(),a.end());
    for(auto i:y)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
}