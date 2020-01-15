#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::vector;
//v1
/*
void print(std::vector<int>::iterator & a,const std::vector<int>::iterator &b)
{
    if(a==b) 
    {
        cout<<*a<<" ";
        return;
    }
    cout<<*a<<" ";
    print(++a,b);
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    auto x=v.begin();
    print(x,v.end()-1);
}
*/
void print(const std::vector<int>::iterator &a,const std::vector<int>::iterator &b)
{
    if(a==b) return;
    cout<<*a<<" ";
    print(a+1,b);
}
using x=string[10];
string s[10];
x& func(int);
decltype(s) &func1(int);
string (&func2(int))[10];
auto func3(int) -> string(&)[10];
int main()
{
    vector<int> v={1,2,3,4,5,6,7,9,10,11,12,13,14,15,16,17,18,19,20};
    print(v.begin(),v.end());
}
