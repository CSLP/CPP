#include<iostream>
#include<vector>
#include<memory>
using namespace std;
shared_ptr<vector<int>> func1()
{
    shared_ptr<vector<int> a=make_shared<vector<int>>();
    return a;
}
shared_ptr<vector<int>> func2(shared_ptr<vector<int>> a)
{
    int i;
    while(cin>>i)
        a->push_back(i);
    return a;
}
void func3(shared_ptr<vector<int>> a)
{
    for(auto i:*a)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    func3(func2(func1()));
}