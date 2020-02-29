#include<iostream>
#include"GS.h"
using std::endl;
using std::cout;
int main()
{
    int a[]={-2,6,-1,5,4,-7,2,3};
    cout<<gs_BF1(a,8)<<endl;
    cout<<gs_BF(a,8)<<endl;
    cout<<gs_DC(a,0,8)<<endl;
}