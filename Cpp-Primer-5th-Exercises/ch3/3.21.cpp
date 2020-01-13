#include<iostream>
#include<string>
#include<vector>   
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
void pring_vector_int(const vector<int> &a)
{
    for(auto b=a.cbegin();b!=a.cend();++b)
        cout<<*b<<" ";
    cout<<endl;
}
void pring_vector_string(const vector<string> &a)
{
    for(auto b=a.cbegin();b!=a.cend();++b)
        cout<<*b<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    pring_vector_int(v1);
    pring_vector_int(v2);
    pring_vector_int(v3);
    pring_vector_int(v4);
    pring_vector_int(v5);
    pring_vector_string(v6);
    pring_vector_string(v7);
}