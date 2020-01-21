#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
class StrBlob;
#include<vector>
#include<string>
#include<memory>
using namespace std;
class StrBlobPtr
{
	public:using size_type=vector<string>::size_type;
	       StrBlobPtr();
	       explicit StrBlobPtr(StrBlob&sb,size_type pos=0);
               string &deref()const;
	       StrBlobPtr&inc();
	private:weak_ptr<vector<string>>wptr;
		size_type curr;
		shared_ptr<vector<string>> check(size_type pos,const string &msg)const;
};
#endif

