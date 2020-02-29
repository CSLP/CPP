#include"vector.h"
#include<iostream>
int main()
{
    int a[]={1,2,3,4,5,6};
    vector b(a,0,6);
    std::cout<<b.search(1,0,b.size());
    system("pause");
}