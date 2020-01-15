#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int fact(int x)
{
    int a=1;
    while(x>1)
        a*=x--;
    return a;
}
unsigned abss(int x)
{
    return (x<0)?-x:x;
}
int main()
{
    int a;
    while(cin>>a)
    {
        cout<<fact(a)<<endl;
        cout<<abss(a)<<endl;
    }
}
