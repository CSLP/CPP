#include<cstdio>
#include<cstring>
#include<iostream>
using std::cout;
void test(char *a)
{
    for(unsigned i=0;i<100;++i)
        cout<<a[i]<<"#";
    int sum=0;
    int s=0;
    for(unsigned i=0;i<100;++i)
    {
        if(a[i]='\0') sum++;
        if(a[i]='') s++;
    }
    cout<<sum<<"*"<<s<<std::endl;

}
int main()
{
    char a[100]="hello";
    test(a);
    cout<<std::endl;
    cout<<a[50]<<std::endl;
}