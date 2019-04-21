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
	string a;int b;
	vector<pair<string,int>> test;
	while(cin>>a>>b)
		test.push_back(make_pair(a,b));
	for(auto &x:test)
		cout<<x.first<<" "<<x.second<<endl;
}
