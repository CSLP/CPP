#include<iostream>//动态规划之矩阵链划分
using namespace std;
//长度为n的矩阵链相乘的代价描述为基本乘法的次数
int matricChainOrder(int *p,int n,int *m,int *s)
{
    for(int i=1;i<=n;i++)    //计算长度为1的链无需切分，最优代价为0
        *(m+(i-1)*n+i-1)=0;
    for(int l=2;l<=n;l++)    //计算规模为2到n的链，对每个链考虑不同的切分点要找到最好的切分点使总的最优代价最小。
    {
        for(int i=1;i<=n-l+1;i++)
        {
            int q=-1;
            int j=i+l-1;
            *(m+(i-1)*n+(j-1))=10000000;
            for(int k=i;k<j;k++)
            {
                q=*(m+(i-1)*n+(k-1))+*(m+(k+1-1)*n+(j-1))+p[i-1]*p[k]*p[j];//m[i,j]=m[i,k]+m[k+1,j]+(i-1)*k*j
                if(q<*(m+(i-1)*n+(j-1))) 
                {
                    *(m+(i-1)*n+(j-1))=q;
                    *(s+(i-1)*n+(j-1))=k;
                }
            }
        }
    }
    return *(m+n-1);
}
void print(int i,int j,int *s,int n)//以括号形式递归地输出结果
{
    if(i==j)
    cout<<"A"<<i;
    else
    {
        cout<<"(";
        int k=*(s+(i-1)*n+j-1);
        print(i,k,s,n);
        print(k+1,j,s,n);
        cout<<")";
    }
    
}