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
int dpBottomUp(string a,string b,int *m,int *s)//自底向上的填表格，给出最优解的值及最优解的动态规划
{
    for(int i=0;i<a.size()+1;i++)
        for(int j=0;j<b.size()+1;++j)
        {
            if(i==0||j==0) *(m+i*(b.size()+1)+j)=0;
            else if(a[i-1]==b[j-1])
            {
                *(m+i*(b.size()+1)+j)=*(m+(i-1)*(b.size()+1)+j-1)+1;
                *(s+(i-1)*(b.size())+j-1)=0;
            } 
            else 
            {
                if(*(m+(i-1)*(b.size()+1)+j)>=*(m+i*(b.size()+1)+j-1))
                {
                    *(m+i*(b.size()+1)+j)=*(m+(i-1)*(b.size()+1)+j);
                    *(s+(i-1)*(b.size())+j-1)=1;
                }
                else 
                {
                    *(m+i*(b.size()+1)+j)=*(m+i*(b.size()+1)+j-1);
                    *(s+(i-1)*(b.size())+j-1)=-1;
                }
            }
        }
    return *(m+a.size()*(b.size()+1)+b.size());
}
void Lcs(string a,string b)
{
    int *m=new int[(a.size()+1)*(b.size()+1)];
    for(int i=0;i<(a.size()+1)*(b.size()+1);++i)
        m[i]=-1;
    int *s=new int[a.size()*b.size()];
    for(int i=0;i<a.size()*b.size();++i)
        s[i]=-2;
    cout<<dpTopDownReExtend(a,b,a.size(),b.size(),m,s)<<endl;
    for(int i=0;i<(a.size()+1)*(b.size()+1);++i)
    {
        if(i!=0&&!(i%(b.size()+1))) cout<<endl;
        cout<<setw(3)<<m[i]<<" ";
    }
    cout<<endl<<"************************************"<<endl;
    cout<<dpBottomUp(a,b,m,s)<<endl;
    for(int i=0;i<(a.size()+1)*(b.size()+1);++i)
    {
        if(i!=0&&!(i%(b.size()+1))) cout<<endl;
        cout<<setw(3)<<m[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<a.size()*b.size();++i)
    {
        if(i!=0&&!(i%b.size())) cout<<endl;
        cout<<setw(3)<<s[i]<<" ";
    }
    cout<<endl;
    stack<char> lc;                    //借助s表输出LCS
    int i=a.size()-1;int j=b.size()-1;
    while(i>=0&&j>=0)
    {
        if(*(s+i*(b.size())+j)==0) 
        {
            lc.push(a[i]); i--;j--;
        }
        else if(*(s+i*(b.size())+j)==1)  i--;
        else j--;
    }
    while(!lc.empty())
    {
        cout<<lc.top();
        lc.pop();
    }
    cout<<endl;
    stack<char> lcc;   //不借助s表，直接用m表输出LCS
    int p=a.size();int q=b.size();
    while(p>0&&q>0)
    {   
        if (*(m+p*(b.size()+1)+q)==*(m+(p-1)*(b.size()+1)+q)) p--;
        else if(*(m+p*(b.size()+1)+q)==(*(m+(p-1)*(b.size()+1)+q-1)+1))  
        {
            lcc.push(a[p-1]);p--;q--;
        } 
        else q--;
    }
    while(!lcc.empty())
    {
        cout<<lcc.top();
        lcc.pop();
    }
    cout<<endl;
}