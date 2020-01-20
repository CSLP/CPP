#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
	ifstream input(argv[1]);
	istream_iterator<string> test(input),eof;
	ostream_iterator<string> output(cout," ");
//	vector<string> str;
//	while(test!=eof)
//		str.push_back(*test++);
	vector<string> str(test,eof);
	copy(str.begin(),str.end(),output);
	cout<<endl;

}
