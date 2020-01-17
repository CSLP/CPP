#include<iostream>
#include<sstream>
#include<string>
using std::istringstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::istream;
istream & print(istream &in)
{
    in.clear();
    string a;
    while(in>>a)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    in.clear();
    return in;
}
int main()
{
    string a="Executin task:g++ -std=c++17 =g /home/wuyulp/Program/C++/C-Plus-Plus/Cpp-Primer-5th-Exercises/ch8/8.8.cpp";
    istringstream in(a);
    print(in);
}