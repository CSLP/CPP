#include<iostream>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<fstream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<utility>
using namespace std;
int main(int argc,char**argv)
{

	multimap<string,string> test
	{
		{
			"Lipeng","File"
		},
		{
			"Lipeng","Edit"
		},
		{
			"Yanlinji","View"
		}
	};
	for(auto &x:test)
		cout<<x.first<<" "<<x.second<<endl;
	string author,books;
	cin>>author>>books;
	auto t=test.find(author);
	if(t==test.end())
	{
		cerr<<"No author"<<endl;
		return 0;
	}
	auto ti=test.equal_range(author);
	for(auto i=ti.first;i!=ti.second;++i)
		if(i->second==books)
			test.erase(i);
	for(auto &x:test)
		cout<<x.first<<" "<<x.second<<endl;
}
