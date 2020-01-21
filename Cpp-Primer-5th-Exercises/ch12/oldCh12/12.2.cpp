#include<iostream>
#include<algorithm>
#include<string>
#include<memory>
#include<initializer_list>
#include<vector>
using namespace std;
class StrBlob
{
	public:using size_type=vector<string>::size_type;
	       StrBlob();
	       StrBlob(initializer_list<string> il);
	       size_type size()const {
		       return data->size();
	       }
	       bool empty()const {
		       return data->empty();
	       }
	       void push_back(const string &t){
		       data->push_back(t);
	       }
	       void pop_back();
	       string &front();
	       const string& front()const;
	       string &back();
	       const string& back()const;
	private:shared_ptr<vector<string>> data;
		void check(size_type i,const string&msg)const;
};
StrBlob::StrBlob():data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il):
	data(make_shared<vector<string>>(il)){}
void StrBlob::check(size_type i,const string &msg)const
{
	if(i>=data->size())
		throw out_of_range(msg);
}
string &StrBlob::front()
{
	check(0,"front on empty StrBlob");
	return data->front();
}
const string &StrBlob::front()const
{
	check(0,"front on empty StrBlob");
	return data->front();
}
string & StrBlob::back()
{
	check(0,"front on empty StrBlob");
	return data->back();
}
const string& StrBlob::back()const
{
	check(0,"front on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back()
{
	check(0,"front on empty StrBlob");
	data->pop_back();
}
void testStrBlob(StrBlob&sb)
{
	try
	{
		sb.push_back("abc");
		sb.push_back("def");
		cout<<"front:"<<sb.front()<<"back:"<<sb.back()<<endl;
		sb.pop_back();
		cout<<"front:"<<sb.front()<<"back:"<<sb.back()<<endl;
		sb.pop_back();
		cout<<"front:"<<sb.front()<<"back:"<<sb.back()<<endl;
	}catch(out_of_range err)
	{
		cerr<<err.what()<<"out of range"<<endl;
	}
	catch(exception err)
	{
		cerr<<err.what()<<endl;
	}
}
void testStrBlob(const StrBlob&sb)//重载const StrBlob对象
{
	try
	{
		cout<<"front:"<<sb.front()<<"back:"<<sb.back()<<endl;
	}catch(out_of_range err)
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
	StrBlob sb2{
		"Hello","World"
	};
	StrBlob sb3={
		"Bye","World"
	};
	const StrBlob csb1;
	const StrBlob csb2{
		"This","Blob"
	};
	testStrBlob(sb1);
	cout<<endl;
	testStrBlob(sb2);
	cout<<endl;
	testStrBlob(sb3);
	cout<<endl;
	testStrBlob(csb1);
	cout<<endl;
	testStrBlob(csb2);
	cout<<endl;
	testStrBlob({
			"ppp","qqq"
			});
	cout<<endl;
}
