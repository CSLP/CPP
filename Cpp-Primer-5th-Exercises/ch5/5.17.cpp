#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
//不够简洁
/*
bool compareVPre(vector<int> &a,vector<int>&b)
{
    auto n=(a.size()<b.size())?a.size():b.size();
    for(decltype(n) i;i<n;++i)
        if(a[i]!=b[i]) return false;
    return true;
}
*/
bool compareVPre(const vector<int>&a,const vector<int>&b)
{
    for(auto i=a.cbegin(),j=b.cbegin();i!=a.cend()&&j!=b.cend();++i,++j)
        if(*i!=*j)  return false;
    return true;
}
int main()
{
    vector<int> a={0,1,1,3};
    vector<int> b={0,1,1,2,3,5,8};
    compareVPre(a,b)?cout<<"Yes!":cout<<"No!"<<endl;
    compareVPre(b,a)?cout<<"Yes!":cout<<"No!"<<endl;
}