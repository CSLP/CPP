#include<iostream>
#include<vector>
#include<iterator> 
#include<cstring>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::string;
using int_array=int[4];
int main()
{
    int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
    // for(int (*p)[4] :ia)
    // {
    //     for(int b:p)
    //     cout<<b<<" ";
    // }
    //理解不到位啊,一维是4个整数,二维是3个数组(逻辑上相当于指向整数的指针);
    for(int (&p)[4]:ia)
        for(int q:p)
        cout<<q<<" ";
    cout<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            cout<<ia[i][j]<<" ";
    cout<<endl;
    for(int(*p)[4]=begin(ia);p!=end(ia);++p)
        for(int *q=*p;q!=*p+4;q++)
            cout<<*q<<" ";
    cout<<endl;
    cout<<endl;
    for(int_array &x:ia)
        for(int b:x)
            cout<<b<<" ";
    cout<<endl;
    for(int_array*p=begin(ia);p!=end(ia);++p)
        for(int *q=*p;q!=*p+4;++q)
            cout<<*q<<" ";
    cout<<endl;
    cout<<endl;
    for(auto &x:ia)
        for(auto b:x)
            cout<<b<<" ";
    cout<<endl;
    for(auto p=begin(ia);p!=end(ia);p++)
        for(auto x=*p;x!=*p+4;x++)
            cout<<*x<<" ";
    cout<<endl;
}