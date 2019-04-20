#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int main()
{
	map<string,int> test;
	string words;
	while(cin>>words)
	{
		auto ti=find_if(words.begin(),words.end(),[](char a){
				return !isalpha(a);
				});
		//第一版犯了一个错,忽略了上述找不到非字母的情况,则ti为尾后迭代器,删除出现未定义情况,同时只能应对只有一个非字母的情况
		//words.erase(ti);   v1
		//if(ti!=words.end()) words.erase(ti);  v2 
		/*while(ti!=words.end())           v3  忽略了删除操作,指针失效问题
		{
			cout<<"1";
			words.erase(ti);++ti;
		}
		*/
		while(ti!=words.end())
		{
			ti=words.erase(ti);
		}
		transform(words.begin(),words.end(),words.begin(),::tolower);
		++test[words];
	}
	for(const auto &x:test)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}
