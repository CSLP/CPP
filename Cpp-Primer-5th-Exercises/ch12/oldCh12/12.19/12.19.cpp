#include<iostream>
#include"StrBlob.h"
#include"StrBlobPtr.h"
void testStrBlob(StrBlob&sb)
{
	try
	{
		sb.push_back("abc");
		cout<<"front: "<<sb.front()<<"back: "<<sb.back()<<endl;
		sb.pop_back();
		cout<<"front: "<<sb.front()<<"back: "<<sb.back()<<endl;
		sb.begin().deref()="Change";
		for(auto p=sb.begin();;p.inc())
			cout<<"deref: "<<p.deref()<<endl;
	}
	catch(out_of_range err)
	{
		cerr<<err.what()<<"out of range"<<endl;
	}
	catch(exception err)
	{
		cerr<<err.what()<<endl;
	}
}
void testStrBlob(const StrBlob&sb)
{
	try{
		cout<<"frong: "<<sb.front()<<"back: "<<sb.back()<<endl;
	}
	catch(out_of_range err)
	{
		cerr<<err.what()<<"out of range"<<endl;
	}
	catch(exception err)
	{
		cerr<<err.what()<<endl;
	}
}
void testBlobPtr(StrBlobPtr&sbp)
{
	try
	{
		sbp.deref()="change2";
		for(auto p=sbp;;p.inc())
			cout<<"deref: "<<p.deref()<<endl;
	}
	catch(out_of_range err)
	{
		cerr<<err.what()<<"out of range"<<endl;
	}
	catch(exception err)
	{
		cerr<<err.what()<<endl;
	}
}
int main()
{
	StrBlob sb1;
	testStrBlob(sb1);
	cout<<endl;
	StrBlob sb2{
		"hello","world"
	};
	testStrBlob(sb2);
	cout<<endl;
	const StrBlob  csb1;
	testStrBlob(csb1);
	cout<<endl;
	const StrBlob csb2{
		"This","Blob"
	};
	testStrBlob(csb2);
	cout<<endl;
	testStrBlob({
			"ppp","qqq"
			});
	cout<<endl;
	

	StrBlobPtr sbp1;
	testBlobPtr(sbp1);
	cout<<endl;
	StrBlobPtr sbp2(sb1);
	testBlobPtr(sbp2);
	cout<<endl;
	StrBlobPtr sbp3(sb1,sb1.size());
	testBlobPtr(sbp3);
	cout<<endl;
	StrBlobPtr sbp4(sb2);
	testBlobPtr(sbp4);
	cout<<endl;
	StrBlobPtr sbp5(sb2,sb2.size());
	testBlobPtr(sbp5);
	cout<<endl;
}
