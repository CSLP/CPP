#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void  changeInt(int *a,int *b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main()
{
    int a=10,b=5;
    cout<<a<<b<<endl;
    changeInt(&a,&b);
    cout<<a<<b<<endl;
}