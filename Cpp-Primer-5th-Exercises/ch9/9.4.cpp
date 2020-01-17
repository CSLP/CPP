#include<iostream>
#include<vector>
#include<iterator>
using std::cout;
using std::endl;
using std::vector;
bool find(vector<int>::const_iterator a,vector<int>::const_iterator b,int e)
{
    while(a!=b)
        if(*(a++)==e)
            return true;
    return false;
}
vector<int>::const_iterator find1(vector<int>::const_iterator a,vector<int>::const_iterator b,int e)
{
    for(auto it=a;it!=b;++it)
        if(*it==e)
            return it;
    return b;
}
int main()
{
    vector<int> a{1,2,3,4,5,6,7};
    find(a.cbegin(),a.cend(),1)?cout<<"true":cout<<"false";
}