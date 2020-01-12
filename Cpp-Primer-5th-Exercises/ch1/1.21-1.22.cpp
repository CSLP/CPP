#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
    Sales_item book;
    Sales_item temp;
    if(cin>>book)
    {
    while(cin>>temp)
    {
        book+=temp;//问题出在这一步,book默认构造函数,是空的,所以book的isbn和temp的isbn不一样;
    }

    cout<<book<<endl;
    }
}