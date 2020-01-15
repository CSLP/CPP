#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void swapPointerByReference(int *&a,int *&b)
{
    int *tmp=a;
    a=b;
    b=tmp;
}
void swapPointerByPointer(int **a,int **b)
{
    int *tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int a,b;
    int *pa,*pb;
    pa=&a;pb=&b;
    cout<<pa<<pb<<endl;
    swapPointerByReference(pa,pb);
    cout<<pa<<pb<<endl;
    swapPointerByPointer(&pa,&pb);
    cout<<pa<<pb<<endl;
}