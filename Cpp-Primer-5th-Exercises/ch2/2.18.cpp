#include<iostream>
using std::cout;
using std::endl;
int main()
{
    int *p=nullptr,*q=p;
    int a=10,b=100;
    p=&a;q=&b;
    cout<<*p<<*q<<endl;
    *p=20;q=&a;
    cout<<*p<<*q<<endl;
}