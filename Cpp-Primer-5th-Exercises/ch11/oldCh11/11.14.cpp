#include<iostream>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
using family=map<string,vector<pair<string,string>>>;
void addfamily(family&fam,string name)
{
	auto ret=fam.insert({
			name,vector<pair<string,string>>()
			});//用姓和空vector初始化map
	if(!ret.second){
		cerr<<"Error:already has family "<<endl;
	}
}
void addChild(family&fam,string name,string child,string birthday)
{
	auto ret=fam.find(name);
	if (ret==fam.end()) cout<<"no such a family"<<endl;
	else 
		ret->second.push_back({
					child,birthday
				});//push_back的是一个pair对象,用花括号默认初始化
}
int main(int argc,char *argv[])
{
	family fam;
	addfamily(fam,"Zhang");
	addfamily(fam,"Li");
	addfamily(fam,"Wang");
	addfamily(fam,"Zhang");
	addChild(fam,"Zhang","San","1992.10.11");
	addChild(fam,"Zhang","Bao","1882.1.1");
	addChild(fam,"Zhang","Tiana","1997.2.11");
	addChild(fam,"Li","Si","1999.9.0");
	addChild(fam,"Wang","Wu","1999.9.9");
	addChild(fam,"Wang","San","1999.9.10");
	addChild(fam,"Zhao","Liu","1999.10.11");
	for(const auto &f:fam)
		for(const auto&name:f.second)
			cout<<f.first<<" "<<name.first<<" "<<name.second<<endl;
	return 0;

}
