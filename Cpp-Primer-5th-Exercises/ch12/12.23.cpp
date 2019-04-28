#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[]="concentrate",b[]="focus";
	int n=strlen(a)+strlen(b)+1;
	char *c=new char[n];
	strcpy(c,a);
	strcat(c,b);
	cout<<c<<endl;
	delete []c;//别忘了
	string x="concentrate1",y="focus";
	int m=x.size()+y.size()+1;
	char *d =new char[m];
	x+=y;
	strcpy(d,x.c_str());
	cout<<d<<endl;
	delete []d;
}
