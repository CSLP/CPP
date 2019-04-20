#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
void elimDups(list<string> &words)
{
	for_each(words.begin(),words.end(),[](const string &x){
				cout<<x<<" "; 
			});
	words.sort();
	words.unique();
	cout<<endl;
	for_each(words.begin(),words.end(),[](const string &x){
				cout<<x<<" "; 
			});
}
int main()
{
	list<string>  words{
		"the","quick","red","fox","jumps","over","over","the","slow","red","slow","the","turtle"
	};
	elimDups(words);
}
