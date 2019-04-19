#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
#include"Sales_item.h"
using namespace std;
bool compareIsb(const Sales_item &,const Sales_item &);
int main(int argc,char *argv[])
{
	istream_iterator<Sales_item> input(cin),eof;
	ostream_iterator<Sales_item> output(cout,"\n");
	vector<Sales_item> li(input,eof);
	sort(li.begin(),li.end(),compareIsb);
	copy(li.begin(),li.end(),output);
	cout<<endl<<endl;
	vector<Sales_item> result;
	for(auto tb=li.begin(),te=tb;tb!=li.end();tb=te)
	{
		te=find_if(tb,li.end(),[tb](const Sales_item &a){
				return a.isbn()!=tb->isbn();
				});
		Sales_item x(tb->isbn());
		result.push_back(accumulate(tb,te,x));
	}
	copy(result.begin(),result.end(),output);

}
bool compareIsb(const Sales_item & a,const Sales_item & b)
{
	return a.isbn()<b.isbn();
}
