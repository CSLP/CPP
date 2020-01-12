#include<iostream>
#include"Sales_item.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
    Sales_item book;
    while(cin>>book)
    {
        cout<<book<<endl;
    }
}