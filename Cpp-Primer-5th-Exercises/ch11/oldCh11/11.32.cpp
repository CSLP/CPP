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
		},
		{
			"Apple","beautiful"
		}
	};
	for(auto &x:test)
		cout<<x.first<<" "<<x.second<<endl;
}
