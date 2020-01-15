#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int test(int a,const int *b)
{
    return (a>*b)?a:*b;
}
int main()
{
    int a=10,b=12;
    cout<<test(a,&b);
}