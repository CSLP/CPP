#include<iostream>
#include<algorithm>
#include<string>
#include<memory>
#include<initializer_list>
#include<vector>
using namespace std;
int main()
{
	unique_ptr<int> x(new int(2));
	//unique_ptr<int> y(x);
	unique_ptr<int> y;
	y=x;
}
