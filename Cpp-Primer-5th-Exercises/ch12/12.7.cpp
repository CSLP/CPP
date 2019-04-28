#include<iostream>
#include<algorithm>
#include<string>
#include<memory>
#include<initializer_list>
#include<vector>
using namespace std;
shared_ptr<vector<int>> a()
{
	return make_shared<vector<int>>();//(args)不可省略,可以为空.
}
void print(shared_ptr<vector<int>> p)
{
	for(auto x:*p)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}
void init(shared_ptr<vector<int>> p)
{
	int a;
	while(cin>>a)
	{
		p->push_back(a);
	}
	print(p);
}
int main()
{
	init(a());	
}
