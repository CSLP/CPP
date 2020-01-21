#include<iostream>
#include<cstring>
#include<memory>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	allocator<string> alloc;
	auto const p=alloc.allocate(n);
	string s;
	auto q=p;
	while(q!=p+n&&cin>>s)
		alloc.construct(q++,s);
	const size_t size=q-p;
	for(int i=0;i!=size;++i)
		cout<<*(p+i)<<endl;
	for(auto pos=p;pos!=q;++pos)
		cout<<*pos<<endl;
	while(q!=p)
		alloc.destroy(--q);
	alloc.deallocate(p,n);
}

