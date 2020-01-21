#ifndef STRBLOB_H
#define STRBLOB_H
class StrBlobPtr;
#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
using namespace std;
class StrBlob
{
	friend class StrBlobPtr;
	public:using size_type=vector<string>::size_type;
	       StrBlob();
	       StrBlob(initializer_list<string> il);
	       size_type size()const{
		       return data->size();
	       }
	       bool empey()const {
		       return data->empty();
	       }
	       void push_back(const string &s);
	       void pop_back();
	       string& front();
	       const string& front()const;
	       string&back();
	       const string& back()const;
	       StrBlobPtr begin();
	       StrBlobPtr end();
	private:shared_ptr<vector<string>> data;
		void check(size_type pos,const string &msg)const;

};
inline void StrBlob::push_back(const string&s)
{
	data->push_back(s);
}
#endif
