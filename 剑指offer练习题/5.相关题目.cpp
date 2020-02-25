#include<iostream>
using namespace std;
void merge(int *a,int *b,int n1,int n2)
{
    int length=0;
    for(int i=0;i<n1;++i,++length)
        if(a[i]==0) break;
    int newLength=length+n2; 
    int i=length-1,j=n2-1;
    cout<<length<<"#"<<endl;
    while(i>=0||j>=0)
    {
        while(i>=0&&(j<0||a[i]>=b[j])) a[--newLength]=a[i--]; 
        while(j>=0&&(i<0||b[j]>=a[i]))  a[--newLength]=b[j--];
    }

}
int main()
{
    int a[20]={1,3,5,7,9};
    int b[5]={2,4,6,8,10};
    merge(a,b,20,5);
    for(unsigned i=0;i<20;++i)
        cout<<a[i]<<"*";
    cout<<endl;
}