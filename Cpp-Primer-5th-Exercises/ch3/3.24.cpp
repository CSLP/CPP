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
    vector<int> a;
    int i;
    while(cin>>i)
    {
        a.push_back(i);
    }
    for(auto it=a.cbegin();it+1!=a.cend();++it)
    {
        cout<<*it+*(it+1)<<" ";
    }
    cout<<endl;
    for(auto it=a.cbegin(),b=a.cend()-1;it<=b;++it,--b)
        cout<<*it+*b<<" ";
}