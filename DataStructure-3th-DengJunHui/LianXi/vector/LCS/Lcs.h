#include<string>
#include<iostream>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int lcsSimpleRe(string a,string b,int i,int j)
{
    if(i==-1||j==-1) return 0;
    else if(a[i]==b[j]) return lcsSimpleRe(a,b,i-1,j-1)+1;
    else return max(lcsSimpleRe(a,b,i-1,j),lcsSimpleRe(a,b,i,j-1));
}