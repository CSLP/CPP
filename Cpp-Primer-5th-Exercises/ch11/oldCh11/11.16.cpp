#include<iostream>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>
#include<numeric>
#include<utility>
using namespace std;
int main()
{
	map<int,int> test;
	int a,b;
	while(cin>>a>>b)
	{
		auto ti=test.find(a);
		if(ti!=test.end()) ti->second=b;
		else test.insert({
				a,b
				});
	}
		for(auto i=test.begin();i!=test.end();++i)
		{
			cout<<i->first<<","<<i->second<<endl;
		}
}
