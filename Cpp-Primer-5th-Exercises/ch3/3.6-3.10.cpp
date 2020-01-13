#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string a="executing task:g++ -std=c++17 =g /home /wuyulp /Program/C++/C-Plus-Plus/Cpp-Primer-5th";
    // for(auto &b:a)
    //     b='X';
    // cout<<a<<endl;
    // for(char b:a)
    //     b='X';
    // cout<<a<<endl;
    // for(char &b:a)
    //     b='X';
    // cout<<a<<endl;
    decltype(a.size())  index=0;
    while(index<a.size())
    {
        a[index]='X';
        ++index;
    }
    cout<<a<<endl;
    string b="nmsl,helloworldiam!!!Come up!";
    for(auto i:b)
        if(!ispunct(i))
        cout<<i;
    cout<<endl;

}