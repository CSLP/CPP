#include<iostream>
#include<forward_list>
#include<list>
using std::forward_list;
using std::list;
using std::cout;
using std::endl;
int main()
{
    list<int> intList{1,2,3,4,5,6,7,8,9,10};
    for(auto begin=intList.begin();begin!=intList.end();)
    {
        if(*begin%2)  
        {
            begin=intList.insert(begin,*begin);
            ++begin;
            ++begin;
        }
        else begin=intList.erase(begin);
    }
    for(const auto &i:intList)
        cout<<i<<" ";
    cout<<endl;
    forward_list<int> fintList{1,2,3,4,5,6,7,8,9,10};
    auto bbegin=fintList.before_begin();
    auto begin=fintList.begin();
    while(begin!=fintList.end()) 
    {
        if(*begin%2)
        {
            bbegin=fintList.insert_after(bbegin,*begin);//插入在bbegin之后其实本质上是插入在当前元素之前,,,,,,
            ++bbegin;
            ++begin;
        }
        else
        {
            begin=fintList.erase_after(bbegin);
        }
    }
    for(const auto &i:fintList)
        cout<<i<<" ";
    cout<<endl;
}
