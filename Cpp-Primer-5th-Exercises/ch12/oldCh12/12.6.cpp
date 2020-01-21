#include<iostream>
#include<algorithm>
#include<string>
#include<memory>
#include<initializer_list>
#include<vector>
using namespace std;
vector<int> * a()
{
//	vector<int> * p=new vector<int>;
//	return p;
	return new vector<int>;
}
void print(vector<int> *p)
{
	for(auto x:*p)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	delete p;
}
void init(vector<int> *p)
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
