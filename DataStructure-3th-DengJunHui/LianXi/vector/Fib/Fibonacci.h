class Fib //Fibonacci数列类
{
private:
    int f,g;//f=fib(k-1),g=fib(k).
public:
    Fib(int n)
    {f=1;g=0;while(g<n) next();}//初始化为大于等于n的最小Fibonacci项目。
    int get(){return g;}
    int next() {g+=f;f=g-f;return g;}
    int prev() {f=g-f;g-=f;return g;}
};
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
int fibReTDMe(int n,int *m)//带备忘的自顶向下(TopDown)的递归
{
    if(m[n]>=0) return m[n];
    else m[n]=(n<2)?n:(fibReTDMe(n-1,m)+fibReTDMe(n-2,m));
    return m[n];
}
int fibReBUMe(int n)//带备忘的自底向上(BottomUp)的递归
{
    int *m=new int[n+1];
    m[0]=0;m[1]=1;
    for(int i=2;i<=n;i++)
    {
        m[i]=m[i-1]+m[i-2];
    }
    return m[n];
}
int fibRe(int n,int prev) //线性递归版 邓俊辉版本的，看了半天没懂，还在那里试来试去，是错的啊
{
    if(n==0)
    {prev=1;return 0;}
    else {
        int prevPrev;prev=fibRe(n-1,prevPrev);
        return prevPrev+prev;//这里的prevPrev是未定义的值 ，返回的结果也未定义。
    }       
}