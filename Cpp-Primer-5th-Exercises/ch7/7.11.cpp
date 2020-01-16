#include<iostream>
#include"Sales_data.h"
using std::cin;
using std::cout;
int main()
{
    Sales_data a;
    Sales_data b("DataStructure");
    Sales_data c("OperatingSystem",10,10.2);
    Sales_data d(cin);
    print(cout,a);
    print(cout,b);
    print(cout,c);
    print(cout,d);
}