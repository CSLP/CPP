#include<iostream>
#include"Fibonacci.h"
using namespace std;
int main()
{
    cout<<fibIt(20)<<endl;
    cout<<fibRe(20)<<endl;
    int m[21];
    for(int i=0;i<21;m[i]=-1,i++);
    cout<<fibReTDMe(20,m)<<endl;
    cout<<fibReBUMe(19)<<endl;
    cout<<fibRe(1,0)<<endl;
    system("pause"); 
}