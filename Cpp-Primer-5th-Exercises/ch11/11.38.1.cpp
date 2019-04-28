#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
	unordered_map<string,size_t> word_count;
	string word;
	while(cin>>word)
		++word_count[word];
	for(auto &x:word_count)
		cout<<x.first<<" "<<x.second<<endl;
}
