#include<iostream>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
//vector还得手动消除重复,set自动消重
int main(int argc,char **argv)
{
	ifstream in(argv[1]);
	istream_iterator<string>  i(in),eof;
	//set<string> test1(i,eof);这样好像初始化不了set
	vector<string> test(i,eof);
	set<string> test1(test.begin(),test.end());
	sort(test.begin(),test.end());
	auto unique_iterator=unique(test.begin(),test.end());
	test.erase(unique_iterator,test.end());
	for(auto x:test)
		cout<<x<<" ";
	cout<<endl;
	for(auto y:test1)
		cout<<y<<" ";
}
