#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int i=0,&r=i;
    auto a=r;
    const int ci=i,&cr=ci;
    auto b=ci;
    auto c=cr;
    auto d=&i;
    auto e=&ci;
    const auto f=ci;
    auto &g=ci;
    // auto &h=42;
    const auto &j=42;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
    a=42;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
    b=42;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
    c=42;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
    // d=42;
    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
    // e=42;
    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
    // g=42;
    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<' '<<g<<" "<<endl;
}