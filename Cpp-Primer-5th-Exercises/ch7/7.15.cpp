#include"Person.h"
#include<iostream>
using std::cin;
using std::cout;
int main()
{
    Person a;
    Person b("Lipeng");
    Person c("Lipeng","DaYaoCun");
    Person d(cin);
    print(cout,a);
    print(cout,b);
    print(cout,c);
    print(cout,d);
}