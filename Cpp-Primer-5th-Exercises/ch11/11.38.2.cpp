#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<sstream>
#include<fstream>
using namespace std;
unordered_map<string,string> buildMap(ifstream&map_file)
{
	unordered_map<string,string> trans_map;
	string key;
	string value;
	while(map_file>>key&&getline(map_file,value))
		if(value.size()>1)
			trans_map[key]=value.substr(1);
		else 
			throw runtime_error("no rule for "+key);
	return trans_map;
}
string transform(const string &s,const unordered_map<string,string> &m)
{
	auto map_it=m.find(s);
	if(map_it!=m.end())
		return map_it->second;
	else 
		return s;
}
void word_transform(ifstream &map_file,ifstream &input)
{
	auto m=buildMap(map_file);
	string text;
	while(getline(input,text))
	{
		istringstream stream(text);
		string word;
		while(stream>>word)
		{
			cout<<" ";
			cout<<transform(word,m);
		}
		cout<<endl;
	}
}
int main(int argc,char** argv)
{
	ifstream in(argv[1]);	
	ifstream m(argv[2]);
	word_transform(m,in);
}
