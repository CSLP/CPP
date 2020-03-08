#include"vector.h"
#include<math.h>
void vector::copyFrom(const int *a,int lo,int hi)
{
    _elem=new int[_capacity=2*(hi-lo)];
    _size=0;
    while(lo<hi)
        _elem[_size++]=a[lo++];
}
void vector::expand()
{
    if(_size<_capacity) return;
    int * oldElem=_elem;
    _elem=new int[_capacity<<=1];
    for(int i=0;i<_size;++i)
        _elem[i]=oldElem[i];
    delete[] oldElem;
}
void vector::shrink()
{
    if((double)_size/_capacity>0.3) return;
    int *oldElem=_elem;
    _elem=new int[_capacity>>=1];
    for(int i=0;i<_size;++i)
        _elem[i]=oldElem[i];
    delete[] oldElem;
}
int &vector::operator[](int i)
{return _elem[i];}
int vector::insert(int r,const int &e)
{
    expand();
    for(int i=_size;i>r;i--)
        _elem[i]=_elem[i-1];
    _elem[r]=e;_size++;return r;
}
int vector::remove(int lo,int hi) //怪不得说show me your code 这区间删除算法是真的优美
{
    if(lo==hi) return 0;
    while(hi<_size)
        _elem[lo++]=_elem[hi++];
    _size=lo;shrink();
    return hi-lo;
}
int vector::remove(int r)
{
    int e=_elem[r];
    remove(r,r+1);
    return e;
}
//无序向量查找
int vector::find(const int &e,int lo,int hi)const//这代码写的我跪了，太强了。命中时返回命中的秩，不命中则返回lo-1
{
    while(lo<hi--&&_elem[hi]!=e);//hi=lo或者命中时结束。当hi=lo时，若elem[hi]！=e,那么还会进行判断此时lo<hi--判断失败，短路借宿,此时hi=lo-1
    return hi;
}
//无需向量去重,唯一化
int vector::deduplicate()
{
    int oldSize=_size;
    for(int i=1;i<_size;)
        if(find(_elem[i],0,i)<0)
            ++i;
        else remove(i);
    return oldSize-_size; 
}
void vector::traverse()
{
    for(unsigned i=0;i<_size;i++)
        _elem[i]=1;
}
//返回逆序数
int vector::disordered()const//这代码尼玛的就简洁的离谱。
{
    int n=0;
    for(int i=1;i<_size;++i)
        n+=(_elem[i]<_elem[i-1]);
    return n;
}
//有序向量去重，唯一化
int vector::uniquify()//已经不想说话了，这代码写的真好，优美，自己写的那种只能实现功能的代码简直跟屎一样
{
    int i=0,j=0;
    while(++j<_size)
    {
        if(_elem[j]!=_elem[i]) 
            _elem[++i]=_elem[j];
    }
    _size=++i;shrink();
    return j-i;
}
int vector::search(const int e,int lo,int hi)//查找算法统一接口:
{
    switch(5)
    {
        case 0:return binSearch1(_elem,e,lo,hi);break;
        case 1:return binSearch2(_elem,e,lo,hi);break;
        case 2:return binSearch3(_elem,e,lo,hi);break;
        case 3:return binSearch3e(_elem,e,lo,hi);break;
        case 4:return fibSearch(_elem,e,lo,hi);break;
        case 5:return binSearch(_elem,e,lo,hi);break;
        default:break;
    }
}
int vector::binSearch1(const int *a,const int e,int lo,int hi)//迭代[lo,mi)UmiU[mi+1,hi)版
{
    while(lo<hi)
    {
        int mi=(lo+hi)>>1;
        if(e<_elem[mi]) hi=mi;
        else if(e>_elem[mi]) lo=mi+1;
        else return mi;
    }
    return -1;
}
int vector::binSearch2(const int*a,const int e,int lo,int hi)//递归[lo,mi)UmiU[mi+1,hi)版
{
    if(hi==lo) return -1;
    int mi=(lo+hi)>>1;
    if(e<_elem[mi]) return binSearch2(_elem,e,lo,mi);
    else if(e>_elem[mi]) return binSearch2(_elem,e,mi+1,hi);
    else return mi;
}
int vector::binSearch3(const int *a,const int e ,int lo,int hi)//迭代[lo,mi)U[mi,hi)版
{
    while(hi-lo>1)
    {
        int mi=(hi+lo)>>1;
        e<a[mi]?hi=mi:lo=mi;//当e>=a[mi]时才进入右半区间，这保证当多个命中时返回最右边的那个
    }
    return e==a[lo]?lo:-1;
}
int vector::binSearch3e(const int *a,const int e ,int lo,int hi)//迭代[lo,mi)U[mi,hi)修改版，返回<=e的秩最大者
{
    while(hi-lo>1)
    {
        int mi=(hi+lo)>>1;
        e<a[mi]?hi=mi:lo=mi;//当e>=a[mi]时才进入右半区间，这保证当多个命中时返回最右边的那个
    }
    return e<a[lo]?lo-1:lo;//这句是真的精髓，就在上面版本3的基础上改一句就实现了search语义，太强了
    //没那么复杂，就是只剩最后一个元素，如果e<a[lo]，记住是有序列表，那么返回lo-1这个就是不大于e的秩最大者。
    //还是没理解减而治之的紧随，只剩最后一个元素的时候，不要考虑真个过程，只考虑这最后一个元素就行了，就相当于只有一个元素的数组，然后查找
    //给定的值，很简单，这个值比e小，那么返回lo-1,因为数组此时只有一个元素吗，而且可以认为a[-1]为无穷小，a[size]为无穷大。e小于唯一的这个元素，那么返回-1，没毛病
    //如果e大于等于这个元素，返回这个元素的秩，没毛病，因为a[size]是无穷大。还是那句话，不管是减而治之或者是分而治之，他们的特色就是子问题和原问题是同一类型的问题
    //当规模缩减为子问题是，根本无需考虑别的，就考虑这个子问题就行了，因为它与原问题是等价的，只不过是规模缩小了而已。这种到最后只剩一个值，就相当于在
    //一个只有一个元素的数组里查找一个特定的值？这不很简单吗？这就是分治的精髓啊。既然已经递归到这个子问题了，根本无需考虑是怎么递归的问题。就考虑这个平凡的子问题就行了
    //e绝对小于a[mi]进入左区间，>=a[mi]时进入右半区间,这样就符合语义了
}
//证明一下正确性，首先在全局的任何时刻，a[lo-1]都是小于等于e的元素的秩最大者，a[hi]是大于e的最小者（当前已经确定的）
//简而言之：任何时刻,都有[0,lo)<=e<[hi,n)
int vector::binSearch(const int *a,const int e,int lo,int hi)//终极符合语义完美版二分查找
{
    while(lo<hi)
    {
        int mi=(lo+hi)>>1;
        e<a[mi]?hi=mi:lo=mi+1;
    }
    return lo-1;
}
int vector::fibSearch(const int *a,const int e ,int lo,int hi)
{
    Fib fib(hi-lo);
    while(lo<hi)
    {
        while(hi-lo<fib.get()) fib.prev();
        int mi=lo+fib.get()-1;
        if(e<a[mi]) hi=mi;
        else if(e>a[mi]) lo=mi+1;
        else return mi;
    }
    return -1;
}