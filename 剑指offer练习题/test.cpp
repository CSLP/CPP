#include<cstdio>
#include<cstring>
#include<iostream>
using std::cout;
void mergeSort1(int *numbers,int lo,int hi) 
{
    if(hi-lo<2) return;
    int mi=(lo+hi)>>1;
    mergeSort1(numbers,lo,mi);
    mergeSort1(numbers,mi,hi);
    int n1=mi-lo,n2=hi-mi;
    int l=lo,m=mi;
    int *a=new int[n1];
    for(unsigned i=0;i<n1;++i)
        a[i]=numbers[l++];
    int *b=new int[n2];
    for(unsigned j=0;j<n2;++j)
        b[j]=numbers[m++];
    int i=0,j=0;
    while(i<n1||j<n2)
    {
        while((i<n1&&(j>=n2||a[i]<=b[j]))) numbers[lo++]=a[i++];
        while((j<n2&&(i>=n1||b[j]<=a[i]))) numbers[lo++]=b[j++];
    }
    delete []a;
    delete []b;
    a=nullptr;b=nullptr;
}
int main()
{
    int a[]={2,1,3,1,4,5};
    int c[5]={2,1,3,1,4};
    mergeSort1(a,0,6);
    for(unsigned i=0;i<6;i++)
        cout<<a[i]<<" ";
}