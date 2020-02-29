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
int vector::remove(int lo,int hi)
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
int vector::find(const int &e,int lo,int hi)const
{
    while(lo<hi--&&_elem[hi]!=e);
    return hi;
}
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
int vector::disordered()const
{
    int n=0;
    for(int i=1;i<_size;++i)
        n+=(_elem[i]<_elem[i-1]);
    return n;
}
int vector::uniquify()
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
int vector::search(const int e,int lo,int hi)
{
    // return (rand()%2)?binSearch1(_elem,e,lo,hi):fibSearch(_elem,e,lo,hi);
    return binSearch2(_elem,e,lo,hi);
}
int vector::binSearch1(const int *a,const int e,int lo,int hi)
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
int vector::binSearch2(const int*a,const int e,int lo,int hi)
{
    if(hi==lo) return -1;
    int mi=(lo+hi)>>1;
    if(e<_elem[mi]) return binSearch2(_elem,e,lo,mi);
    else if(e>_elem[mi]) return binSearch2(_elem,e,mi+1,hi);
    else return mi;
}