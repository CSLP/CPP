#include<iostream>
#include<initializer_list>
using std::cout;
using std::initializer_list;
int sum(initializer_list<int> li)
{
    int sum=0;
    for(const auto &a:li)
        sum+=a;
    return sum;
}
int main()
{
    int a=10,b=10,c=10,d=10;
    cout<<sum({a,b,c,d});
}