#include<iostream>
#include<vector>
#include<list>
using std::vector;
using std::list;
using std::cout;
using std::endl;
int main()
{
    vector<int> a{1,2,3,4};
    vector<int> b{1,2,3,4,5};
    vector<int> c{1,3};
    vector<int> d{1,2,3,4};
    list<int> e{1,2,8};
    cout<<(a<b)<<endl;
    cout<<(c>b)<<endl;
    cout<<(a==d)<<endl;
    auto i=d.begin();auto j=e.begin();
    for(;i!=d.end()&&j!=e.end();++i,++j)
        if(*i!=*j)
        {
            (*i<*j)?cout<<"vector lose"<<endl:cout<<"list lose"<<endl;
            return 0; 
        }
        if(i==d.end()&&j==e.end())
            cout<<"both win"<<endl;
        else if(i!=d.end())
                cout<<"list lose"<<endl;
            else cout<<"vector lose"<<endl;
}