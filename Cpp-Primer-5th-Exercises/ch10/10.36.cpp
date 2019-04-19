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
	list<int> a{
		1,2,0,3,5,10,2,0,5	
	};
	auto x=find(a.rbegin(),a.rend(),0);
	cout<<*(++x)<<endl;
}
