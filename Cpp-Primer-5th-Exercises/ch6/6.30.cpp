#include<iostream>
bool test(int a,int b)
{
    if(a>b)
        return 1;
    else if(a==b) return 0;
}
int main()
{
    test(10,11);
}