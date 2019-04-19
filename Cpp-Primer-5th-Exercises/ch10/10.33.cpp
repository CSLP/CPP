#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
void test(ifstream &,ofstream &,ofstream &);
int main(int argc,char *argv[])
{
	ifstream in(argv[1]);
	ofstream out1(argv[2]);
	ofstream out2(argv[3]);
	test(in,out1,out2);
}
void test(ifstream &in,ofstream & out1,ofstream &out2)
{
	istream_iterator<int> input(in),eof;
	ostream_iterator<int> outputOdd(out1," ");
	ostream_iterator<int> outputEven(out2,"\n");
	//stupid codes
	//vector<int> integer(input,eof);
	//auto part=partition(integer.begin(),integer.end(),[](const int a){
	//		return a%2;
	//		});
	//copy(integer.begin(),part,outputOdd);
	//copy(part,integer.end(),outputEven);
	//better ways
	for_each(input,eof,[&](int x){
				x%2?outputOdd=x:outputEven=x;	
			});
}
