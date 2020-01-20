#include<iostream>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
using family=map<string,vector<string>>;
void addfamily(family&fam,string name)
{
	auto ret=fam.insert({
			name,vector<string>()
			});//用姓和空vector初始化map
	if(!ret.second){
		cerr<<"Error:already has family "<<endl;
	}
}
void addChild(family&fam,string name,string child)
{
	auto ret=fam.find(name);
	if (ret==fam.end()) cout<<"no such a family"<<endl;
	else 
	{
		ret->second.push_back(child);
	}
}
int main(int argc,char *argv[])
{
	family fam;
	addfamily(fam,"Zhang");
	addfamily(fam,"Li");
	addfamily(fam,"Wang");
	addfamily(fam,"Zhang");
	addChild(fam,"Zhang","San");
	addChild(fam,"Zhang","Bao");
	addChild(fam,"Zhang","Tian");
	addChild(fam,"Li","Si");
	addChild(fam,"Wang","Wu");
	addChild(fam,"Wang","San");
	addChild(fam,"Zhao","Liu");
	for(const auto &f:fam)
		for(const auto&name:f.second)
			cout<<f.first<<" "<<name<<endl;
	return 0;

}
