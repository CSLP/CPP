#include<iostream>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;
using family=multimap<string,string>;
void addChild(family&fam,string name,string child)
{
	fam.insert({name,child});
}
int main()
{
	family fam;
	addChild(fam,"Zhang","San");
	addChild(fam,"Zhang","Bao");
	addChild(fam,"Zhang","Tian");
	addChild(fam,"Li","Si");
	addChild(fam,"Wang","Wu");
	addChild(fam,"Wang","San");
	addChild(fam,"Zhao","Liu");
	for(auto i=fam.begin();i!=fam.end();++i)
		cout<<i->first<<" "<<i->second<<endl;
	return 0;

}
