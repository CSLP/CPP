#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    string a;int b;
    vector<int> bv;
    vector<string>av;
    // while(cin>>b)
    // {
    //     bv.push_back(b);
    // }
    // for(auto a:bv)
    //     cout<<a<<" ";
    // cout<<endl;
    while(cin>>a)
    {
        av.push_back(a);
    }
    for( auto a:av)
        cout<<a<<" ";
    cout<<endl;
}