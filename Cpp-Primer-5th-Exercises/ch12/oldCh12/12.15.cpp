#include<iostream>
#include<algorithm>
#include<string>
#include<memory>
#include<initializer_list>
#include<vector>
using namespace std;
struct destination
{
	int id;
	destination(int i): id(i){

	};
};
struct connection
{
	destination * dest;
};
connection connect(destination *x)
{
	connection con;
	con.dest=x;
	return con;
}
void disconnect(connection &x)
{
	cout<<"destroy connection"<<endl;
	x.dest=nullptr;
}
void f(destination&d)
{
	connection c=connect(&d);
	shared_ptr<connection> p(&c,[](connection*x){
			disconnect(*x);
			});
}
int main()
{
	destination port(10);
	f(port);
}
