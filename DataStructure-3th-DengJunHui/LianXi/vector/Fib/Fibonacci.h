class Fib //Fibonacci数列类
{
private:
    int f,g;//f=fin(k-1),g=fib(k).
public:
    Fib(int n)
    {f=1;g=0;while(g<n) next();}//初始化为大于等于n的最小Fibonacci项目。
    int get(){return g;}
    int next() {g+=f;f=g-f;return g;}
    int prev() {f=g-f;g-=f;return g;}
};