#include<iostream>
#include"shift.h"
using namespace std;
int main()
{
    int a[21];
    int b[21],c[21],d[21],e[21];
    for(int i=0;i<21;i++)
        a[i]=b[i]=c[i]=d[i]=e[i]=i;
    for(int i=0;i<21;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    shift0(a,21,6); 
    shift1(b,21,6); 
    shift2(c,21,6);
    shift3(d,21,6);
    for(int i=0;i<21;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<21;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<21;i++)
        cout<<c[i]<<" ";
    cout<<endl;
    for(int i=0;i<21;i++)
        cout<<d[i]<<" ";
    cout<<endl;
    system("pause");
}