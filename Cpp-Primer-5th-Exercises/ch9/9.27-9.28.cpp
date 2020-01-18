#include<iostream>
#include<forward_list>
#include<string>
using std::string;
using std::forward_list;
using std::cout;
using std::endl;
void findAndInsert(forward_list<string> &stringList,string target,string ele)
{
    auto j=stringList.before_begin();
    auto i=stringList.begin();
    for(;i!=stringList.end();++i,++j)
    {
        if(*i==target)
            break;
    }
    if(i==stringList.end()) stringList.insert_after(j,ele);
    else   stringList.insert_after(i,ele);
}
int main()
{
    forward_list<int> a{1,2,3,4,5,6,7,8,9,10};
    auto p=a.before_begin();
    auto cur=a.begin();
    while(cur!=a.end())
    {
        if(*cur%2) cur=a.erase_after(p);
        else
        {
            p=cur;
            ++cur;
        }
    }
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    forward_list<string>  listString{"file","edit","selection","view","go","debug","terminal","help"};
    findAndInsert(listString,"go","nimasile");
    findAndInsert(listString,"nasile","nimasile");
    for(const auto &i:listString)
        cout<<i<<" ";
    cout<<endl;
}