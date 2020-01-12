#include<iostream>
int main()
{
    int sum=0;
    for(int i=50;i<101;i++)
    {
        sum+=i;
    }
    std::cout<<sum;
    std::cout<<std::endl;
    for(int i=10;i>=0;--i)
    std::cout<<i<<" ";
    std::cout<<std::endl;
    int a,b;
    for(std::cin>>a>>b;a<=b;a++)
    std::cout<<a<<" ";
    std::cout<<std::endl;
}
