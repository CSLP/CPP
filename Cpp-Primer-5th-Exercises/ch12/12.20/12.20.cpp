#include<iostream>
#include<fstream>
#include"StrBlobPtr.h"
#include"StrBlob.h"
using namespace std;
int main(int argc,char **argv)
{
	ifstream in(argv[1]);
	string h;
	StrBlob x;
	while(getline(in,h))
	{
		x.push_back(h);
	}
	auto p=x.begin();
	for(StrBlob::size_type pos=0;pos!=x.size();++pos,p.inc())
		cout<<p.deref()<<endl;
/*	for(auto i=x.begin();;i.inc())妈的为什么 这个不行,总得加一句cout<<"nihao"<<endl;
	{
		cout<<"nihao"<<endl;
		cout<<i.deref();
	}
	*/
	

}
