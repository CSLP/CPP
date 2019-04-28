#include"StrBlobPtr.h"
#include"StrBlob.h"
using namespace std;
StrBlobPtr::StrBlobPtr():wptr(),curr(0){}
StrBlobPtr::StrBlobPtr(StrBlob&sb,size_type pos):wptr(sb.data),curr(0){}
shared_ptr<vector<string>>
StrBlobPtr::check(size_type pos,const string &msg)const
{
	auto ret=wptr.lock();
	if(!ret)
		throw runtime_error("unbound StrBlobPtr");
	if(pos>=ret->size())
		throw out_of_range(msg);
	return ret;
}
string &StrBlobPtr::deref()const
{
	auto sp=check(curr,"deference past end of StrBlobPtr");
	return (*sp)[curr];
}
StrBlobPtr&StrBlobPtr::inc()
{
	check(curr,"increment past end of StrBloPtr");
	++curr;
	return *this;
}
