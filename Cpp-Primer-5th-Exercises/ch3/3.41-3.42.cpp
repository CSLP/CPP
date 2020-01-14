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
using std::strcpy;
using std::strcmp;
using std::strcat;
using std::string;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    //用引用快一点主要是因为不用赋值,创建新对象,但也带来了新的问题就是可能改变原来的置,所以在只是为了省空间时间的情况下用引用,即不是为了改变数值的情况下用引用的时候最好用const限定
    for(const auto &i:a)
        cout<<i<<" ";
    cout<<endl;
    // vector<int> b(a,a+10); 
    vector<int> b(a,end(a));
    for(auto &i:b)
        cout<<i<<" ";
    cout<<endl;
    int c[10];
    int *beg=c;
    int *en=beg+b.size();
    for(const auto &i:b)
        *beg++=i; 
    // for(decltype(b.size())i=0;i<b.size();i++)
    //     c[i]=b[i];
    for(auto &i:c)
        cout<<i<<" ";
    cout<<endl;
    
        

}