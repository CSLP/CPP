#include<cstdio>
#include<cstring>
#include<iostream>
using std::cout;
void quickSort(int *numbers,int lo,int hi)
{
    if(lo==hi) return;
    int a=lo,b=hi;
    int pivot=numbers[lo];
    while(hi>lo)
    {
        while(hi>lo&&numbers[--hi]>=pivot);
        numbers[lo]=numbers[hi];
        while(hi>lo&&numbers[++lo]<pivot);
        numbers[hi]=numbers[lo];
    }
    numbers[lo]=pivot;
    
    quickSort(numbers,a,lo);
    quickSort(numbers,lo+1,b);
}
int main()
{
    int a[]={11,2,3,4,5,6,7,8,9,20,19,18,16,22,15,14,13,12,11,10};
    int c[5]={2,1,3,1,4};
    quickSort(a,0,20);
    for(unsigned i=0;i<20;i++)
        cout<<a[i];
}