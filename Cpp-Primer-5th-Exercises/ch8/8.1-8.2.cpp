#include<iostream>
using std::cout;
using std::cin;
using std::istream;
istream & print(istream &in)
{
    int a;
    while(in>>a)
    {
        cout<<a<<" ";
    }
    in.clear();
    return in;
}
int main()
{
    print(cin);
}