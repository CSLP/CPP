#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
	istream_iterator<int> input(cin),eof;
	ostream_iterator<int> output(cout," ");
	vector<int> s(input,eof);
	sort(s.begin(),s.end());
	copy(s.begin(),s.end(),output);
}
