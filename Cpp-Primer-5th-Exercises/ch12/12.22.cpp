class ConstStrBlobPtr
{
//其他同StrBlobPtr,只要构造函数的StrBlob参数改一下就可以啦
	explict ConstStrBlobPtr(const StrBlob&sb,size_type pos=0);
}
