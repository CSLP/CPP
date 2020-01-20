#include<iostream>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>
#include<numeric>
#include<utility>
using namespace std;
string trimStr(string s)
{
	string punctuations="\"`':*-_;,.?!()[]{}\\";
	auto bg=s.find_first_not_of(punctuations);
	auto eg=s.find_last_not_of(punctuations);
	if(bg==eg) return "";
	string s1=s.substr(bg,eg-bg+1);
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	return s1;
}
int main()
{
	map<string,size_t> words;
	string word;
	while(cin>>word)
	{
		word=trimStr(word);
		auto ti=words.insert({
				word,1
				});
		if(!ti.second) ++ti.first->second;
	}
	for(auto &x:words)
		cout<<x.first<<" "<<x.second<<endl;
}
