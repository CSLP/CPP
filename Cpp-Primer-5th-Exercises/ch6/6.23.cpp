#include<iostream>
#include<iterator>
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
void print(const int * a)
{
    cout<<*a<<endl;
}
void print1(const int a[])
{
    cout<<*a<<endl;
}
void print2(const int*a,const int*b)
{
    while(a!=b)
        cout<<*a++<<" ";
    cout<<endl;
}
void print3(const int *a,size_t n)
{
    for(size_t i=0;i<n;++i)
    {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
void print4(const int (&a)[2])
{
    cout<<a[0]<<" "<<a[1]<<endl;
}
int main()
{
    int i=0,j[2]={0,1};
    print(&i);
    print1(&i);
    print2(begin(j),end(j));
    print3(j,end(j)-begin(j));
    print4(j);
}