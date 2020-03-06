#include<string>
#include<iostream>
#include<iomanip>
#include<stack>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int lcsSimpleRe(string a,string b,int i,int j)//朴素递归
{
    if(i==-1||j==-1) return 0;
    else if(a[i]==b[j]) return lcsSimpleRe(a,b,i-1,j-1)+1;
    else return max(lcsSimpleRe(a,b,i-1,j),lcsSimpleRe(a,b,i,j-1));
}
int dpTopDownReExtend(string a,string b,int i,int j,int *m,int *s)//自顶向下的给出最优解的动态规划
{
   int q=*(m+i*(b.size()+1)+j);
   if(q>=0) return q;
   if(i==0||j==0) *(m+i*(b.size()+1)+j)=0;
   else if(a[i-1]==b[j-1]) *(m+i*(b.size()+1)+j)=dpTopDownReExtend(a,b,i-1,j-1,m,s)+1;
   else *(m+i*(b.size()+1)+j)=max(dpTopDownReExtend(a,b,i-1,j,m,s),dpTopDownReExtend(a,b,i,j-1,m,s));
   return *(m+i*(b.size()+1)+j);
}
void Lcs(string a,string b)
{
    int *m=new int[(a.size()+1)*(b.size()+1)];
    for(int i=0;i<(a.size()+1)*(b.size()+1);++i)
        m[i]=-1;
    int *s=new int[a.size()*b.size()];
    for(int i=0;i<a.size()*b.size();++i)
        s[i]=0;
    cout<<dpTopDownReExtend(a,b,a.size(),b.size(),m,s)<<endl;
    for(int i=0;i<(a.size()+1)*(b.size()+1);++i)
    {
        if(i!=0&&!(i%(b.size()+1))) cout<<endl;
        cout<<setw(3)<<m[i]<<" ";
    }
}