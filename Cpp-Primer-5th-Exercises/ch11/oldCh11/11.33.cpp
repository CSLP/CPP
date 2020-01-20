#include<iostream>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<fstream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<numeric>
#include<utility>
using namespace std;
map<string,string> buildMap(const string &map_file)
{
	ifstream  in(map_file);
	map<string,string> mapfile;
	string key,value;
	while(in>>key&&getline(in,value))
	{
		if(value.size()>0)
			mapfile.insert({key,value.substr(1)});
		else cerr<<"Wrong map_file";
	}
	return mapfile;
}
string transform(string &word,map<string,string> &map_file)
{
	string nword=word;
	auto ti=map_file.find(nword);
	if(ti==map_file.end()) return word;
	else  return ti->second;

}
void word_transform(const string &map_file,const string &text)
{
	ifstream in(text);	
	auto mapfile=buildMap(map_file);
	string words;
	string word;
	while(getline(in,words))
	{
		istringstream input(words);
		while(input>>word)
			cout<<transform(word,mapfile)<<" ";
		cout<<endl;
	}
}
int main(int argc,char**argv)
{
	word_transform(argv[1],argv[2]);
}
