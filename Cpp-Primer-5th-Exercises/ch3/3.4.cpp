#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string a,b;
    cin>>a>>b;
    if(a!=b)
    cout<<(a>b?a:b)<<endl;
    if(a.size()!=b.size())
    cout<<(a.size()>b.size()?a:b)<<endl;
}