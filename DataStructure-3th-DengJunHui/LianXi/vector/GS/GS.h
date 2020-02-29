//最大子区段和问题或者说是最大连续子序列和问题
int gs_BF(int a[],int n)//brute force 蛮力算法 O(n^3)
{
    int gs=a[0];int s=0;
    for(int i=0;i<n;++i)
    {
        for(int j=i;j<n;++j)
        {
            s=0;
            for(int k=i;k<=j;k++)
                s+=a[k];
            if(s>gs) gs=s;
        }
    }
    return gs;
}
int gs_BF1(int a[],int n)//略微改进(递增版)的蛮力算法O(n^2)
{
    int gs=a[0];int s=0;
    for(int i=0;i<n;++i)
    {
        s=0;
        for(int j=i;j<n;++j)
        {
            s+=a[j]; 
            if(s>gs) gs=s;
        }
    }
    return gs;
}
int max(int a,int  b,int c)
{
    int m=a;
    if(b>m) m=b;
    if(c>m) m=c; 
    return m;
}
int gs_DC(int a[],int lo,int hi) //分治Divide and Conquer  O(n*logn)
{
    if(hi-lo<2) return a[lo];
    int mi=(hi+lo)>>1;
    int gsL=0,gsR=0,s=0;
    for(int i=mi-1;i>=lo;--i)
    {
        s+=a[i];
        if(s>gsL) gsL=s;
    }
    s=0;
    for(int j=mi;j<hi;++j)
    {
        s+=a[j];
        if(s>gsR) gsR=s;
    }
    return max(gs_DC(a,lo,mi),gsL+gsR,gs_DC(a,mi,hi));
}
