#include<iostream>
#include<list>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(int argc,char *argv[])
{
	vector<int> ori{
		0,1,2,3,4,5,6,7,8,9
	};
	list<int> r(ori.rbegin()+2,ori.rbegin()+7);
	for(auto x:r)
	{
		cout<<x<<' ';
	}
	cout<<endl;

}
