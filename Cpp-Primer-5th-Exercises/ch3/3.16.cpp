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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    vector<vector<int>> a;
    a.push_back(v1);
    a.push_back(v2);
    a.push_back(v3);
    a.push_back(v4);
    a.push_back(v5);
    vector<vector<string>> b;
    b.push_back(v6);
    b.push_back(v7);
    for(const auto &i:a)
    {
       cout<<i.size()<<":    "; 
       for(auto j:i)
        cout<<j<<" ";
       cout<<endl;
    }
    for(const auto &i:b)
    {
       cout<<i.size()<<":    "; 
       for(auto j:i)
        cout<<j<<" ";
       cout<<endl;
    }
}