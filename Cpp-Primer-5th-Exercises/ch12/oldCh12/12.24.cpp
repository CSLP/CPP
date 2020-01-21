#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int len;
	cin>>len;
	cin.ignore();
	char *a=new char[len+1];
	cin.get(a,len+1);//cin.get(a,n)只会读取n-1个字符
	cout<<a<<endl;
}

