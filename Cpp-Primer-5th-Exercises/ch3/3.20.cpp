#include<iostream>
#include<string>
#include<vector>   
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
    int a;
    vector<int> b;
    while(cin>>a)
    {
        b.push_back(a);
    }
    for(decltype(b.size()) i=0;i+1!=b.size();++i)
        cout<<b[i]+b[i+1]<<" ";
    cout<<endl;
    for(decltype(b.size()) i=0,j=b.size()-1;i<=j;++i,--j)
        cout<<b[i]+b[j]<<" ";
    cout<<endl;

}