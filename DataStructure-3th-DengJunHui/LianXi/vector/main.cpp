#include"vector.h"
#include<iostream>
using std::endl;
int main()
{
    int a[]={1,2,3,4,4,6,6,7};
    int b[]={20,20,19,18,17,16,15,14,13,12,11,1,2,3,4,5,6,7,8,9,10};
    vector test1(a,0,8);
    vector test2(b,0,21);
    std::cout<<test1.search(5,0,test1.size())<<endl;
    test2.traverse();
    test2.sort(0,test2.size());
    test2.traverse();
    system("pause");
}