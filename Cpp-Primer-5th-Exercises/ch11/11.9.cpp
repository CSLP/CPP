#include<iostream>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(int argc,char **argv)
{
	map<string,list<int>> words{
		{
			"word",{
				1,2,3,4
			}
		},
		{
			"chara",{
				4,5,7,9
			}
		},
		{
			"hello",{
				100,200
			}
		}

	};
	for(auto &x:words)
		for(auto &y:x.second)
			cout<<x.first<<" "<<y<<endl;
}
