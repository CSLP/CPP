int fibIt(int n)//计算第n项，迭代版
{
/*弱智版
    if(n==0) return 0;
    if(n==1) return 1;
    int f=0,g=1;
    for(int i=2;i<=n;i++)
    {
        g+=f;f=g-f;
    }
    return g;
*/
//牛逼，把此时的k想成fib(-1)及fib(-1)=1,fib(0)=0,fib(1)=1
    int f=1,g=0;
    for(int i=0;i<n;++i)//n次加减法得到第n项
    {
        g+=f;f=g-f;
    }
//for(int i=0;i<n;++i)等价于while(0<n--)无敌
    return g;
}
int fibRe(int n) //二分递归版
{
    // if(n==0) return 0;
    // if(n==1) return 1;
    // return fibRe(n-1)+fibRe(n-2);
    return(n<2)?n:(fibRe(n-1)+fibRe(n-2));
}
int fibRe(int n,int prev) //线性递归版
{
    if(n==0)
    {prev=1;return 0;}
    else {
        int prevPrev;prev=fibRe(n-1,prevPrev);
        return prevPrev+prev;
    }       
}
