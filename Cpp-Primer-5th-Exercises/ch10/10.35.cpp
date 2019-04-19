#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(int argc,char *argv[])
{
	vector<int> a{
		1,2,3,4,5,6,7,8,9,10
	};
	for(auto it=a.end()-1;it!=a.begin()-1;--it)
		cout<<*it<<" ";
	cout<<endl;

}
