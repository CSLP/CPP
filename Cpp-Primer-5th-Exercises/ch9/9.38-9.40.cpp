#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    vector<int> a;
    cout<<a.size()<<" "<<a.capacity()<<endl;
    for(int i=0;i<10;i++)
        a.push_back(i);
    cout<<a.size()<<" "<<a.capacity()<<endl;
    vector<int> b;
    b.reserve(100);
    cout<<b.capacity()<<endl;
    a.reserve(140);
    cout<<a.size()<<" "<<a.capacity()<<endl;
    a.resize(5);
    cout<<a.size()<<" "<<a.capacity()<<endl;
    vector<string> svec;
    svec.reserve(1024);
    string word;
    for(int i=0;i<1048;i++)
        svec.push_back("hello ");
    svec.reserve(svec.size()+svec.size()/2);
    cout<<svec.size()<<" "<<svec.capacity()<<endl;
}