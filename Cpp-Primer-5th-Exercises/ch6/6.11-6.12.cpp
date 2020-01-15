#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void reset(int &a)
{
    a=0;
}
void swapInt(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
int main()
{
    int a=10,b=2;
    cout<<a<<b;
    reset(a);
    swapInt(a,b);
    cout<<a<<b;
}