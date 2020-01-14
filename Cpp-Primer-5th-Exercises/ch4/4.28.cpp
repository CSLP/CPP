#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    char a=' ';
    cout<<sizeof(int)<<a<<sizeof(double)<<a<<sizeof(char)<<a<<sizeof(char *)<<a<<sizeof(double *)<<a<<sizeof(float)<<a<<sizeof(long)<<a<<sizeof(long long)<<a<<sizeof(long double);
    int x[10];int *p=x;
    cout<<sizeof(x)<<" "<<sizeof(p)<<a<<sizeof(*p)<<a<<sizeof(*x);
    std::cout << "char        " << sizeof(char) << std::endl; 
    std::cout << "wchar_t     " << sizeof(wchar_t) << std::endl; 
    std::cout << "char16_t    " << sizeof(char16_t) << std::endl; 
    std::cout << "char32_t    " << sizeof(char32_t) << std::endl; 
    std::cout << "short       " << sizeof(short) << std::endl; 
    std::cout << "int         " << sizeof(int) << std::endl; 
    std::cout << "long        " << sizeof(long) << std::endl; 
    std::cout << "long long   " << sizeof(long long) << std::endl; 
    std::cout << "float       " << sizeof(float) << std::endl; 
    std::cout << "double      " << sizeof(double) << std::endl; 
    std::cout << "long double " << sizeof(long double) << std::endl; 

}