#include"List.h"
int main()
{
    int a[]={5,4,3,2,1,1,10,9,9,8,7,6};
    int b[]={5,4,3,2,1,1,10,9,9,8,7,6};
    int c[]={1,5,4,3,4,2};
    List test1(a,0,12);
    List test2(b,0,12);
    List test3(c,0,6);
    test1.traverse();
    test2.traverse();
    test3.traverse();
    test1.selectionSort(test1.first(),test1.size());
    // test2.insertionSort(test2.first(),test2.size());  
    test3.insertionSort(test3.first(),test3.size());  
    test1.traverse();
    test2.traverse();
    test3.traverse();
    posi p=test1.search(9,test1.size()-1,test1.last());
    int n=0;
    while(p!=test1.first()) //search工作正常
    {
        p=p->pred;
        n++;
    }
    cout<<n;
    system("pause");
}