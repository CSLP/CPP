#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
	map<string,int> test;
	string words;
	while(cin>>words)
	{
		++test[words];
	}
	for(const auto &x:test)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}
