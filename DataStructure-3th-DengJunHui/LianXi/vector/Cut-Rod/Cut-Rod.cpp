#include<iostream>
#include"Cut-Rod.h"
using namespace std;
int main()
{
    int p[10]={1,5,8,9,10,17,17,20,24,30};
    int m[10]={0};
    for(int i=0;i<10;++i)
        m[i]=-1;
    cout<<simpleRe(p,8)<<endl;
    cout<<dpReTopDownMemoized(p,m,8)<<endl;
    // cout<<simpleRe(p,2)<<endl;
    system("pause");
}