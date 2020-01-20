#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> a{
		1,1,3,3,2,2,5,5
	};
	list<int> b;
	unique_copy(a.begin(),a.end(),back_inserter(b));
	for(auto x:b)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}
