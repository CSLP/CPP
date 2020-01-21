#include<iostream>
#include<vector>
using namespace std;
vector<int> * func1()
{
    auto p=new vector<int>;
    return p;
}
vector<int>* func2(vector<int>*a)
{
    int i;
    while(cin>>i)
        a->push_back(i);
    return a;
}
void func3(vector<int>*b)
{
    for(auto i:*b)
        cout<<i<<" ";
    cout<<endl;
    delete b;
}
int main()
{
    func3(func2(func1()));
}