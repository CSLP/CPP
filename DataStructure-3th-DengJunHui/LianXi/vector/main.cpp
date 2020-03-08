#include"vector.h"
#include<iostream>
int main()
{
    int a[]={1,2,3,4,4,6,6,7};
    vector b(a,0,8);
    std::cout<<b.search(5,0,b.size());
    system("pause");
}