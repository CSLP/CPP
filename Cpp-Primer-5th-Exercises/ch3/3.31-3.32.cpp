#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a[10],b[10];
    for(size_t i=0;i<10;i++)
        a[i]=i;
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    for(size_t i=0;i<10;i++)
        b[i]=a[i];
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
    vector<int> aa;
    for(int i=0;i<10;i++)
    aa.push_back(i);
    for(auto i:aa)
        cout<<i<<" ";
    cout<<endl;
}
