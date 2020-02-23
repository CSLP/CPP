#include<iostream>
#include<memory>
using namespace std;
int main()
{
    unique_ptr<int> x(new int(10));
    unique_ptr<int> y=x;
    unique_ptr<int> z;
    z=x;

}