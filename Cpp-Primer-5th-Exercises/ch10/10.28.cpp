#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> a{
		1,2,3,4,5,6,7,8,9
	};
	list<int> b,c,d;
	copy(a.begin(),a.end(),back_inserter(b));
	copy(a.begin(),a.end(),front_inserter(c));	
	copy(a.begin(),a.end(),inserter(d,d.begin()));
	for(auto x:b)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:c)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:d)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

