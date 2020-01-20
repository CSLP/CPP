#include<iostream>
#include<functional>
#include<string>
#include<numeric>
#include<list>
#include<vector>
#include<stack>
#include<algorithm>
#include<fstream>
#include"Sales_item.h"
using namespace std;
using namespace std::placeholders;
void elimDups(vector<string>&words)
{
	sort(words.begin(),words.end());
	auto ti=unique(words.begin(),words.end());
	words.erase(ti,words.end());
}
bool bigger(const string&a,string::size_type sc)
{
	return a.size()>sc;
}
bool check_size(const string &a,int p)
{
	return p>a.size();
}
void biggies(vector<string> &words,vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(),words.end(),[](const string &a,const string &b){
			return a.size()<b.size();
			});
	auto wc=stable_partition(words.begin(),words.end(),bind(check_size,_1,sz));
	for_each(wc,words.end(),[](const string&a){
			cout<<a<<" ";
			});
	cout<<endl;
}
int main()
{
	string x;
	vector<string> words;
	while(cin>>x)
		words.push_back(x);
	for(auto x:words)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	biggies(words,5);
}
