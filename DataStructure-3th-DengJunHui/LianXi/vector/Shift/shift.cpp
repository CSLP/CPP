#include<iostream>
#include"shift.h"
using namespace std;
int main()
{
    int a[21];
    for(int i=0;i<21;a[i]=i,i++);
    for(int i=0;i<21;i++)
        cout<<a[i]<<" ";
    shift(a,21,6); 
    for(int i=0;i<21;i++)
        cout<<a[i]<<" ";
}