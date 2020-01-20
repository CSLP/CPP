#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
using namespace std::placeholders;
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
bool compare(const string &a,vector<string>::size_type sz)
{
    return a.size()<=sz;
}
int main()
{
    vector<string> words;
    vector<string>::size_type sz=6;
    for(string word;cin>>word;words.push_back(word)){}
    sort(words.begin(),words.end());
    auto pos=unique(words.begin(),words.end());
    words.erase(pos,words.end());
    cout<<count_if(words.begin(),words.end(),bind(compare,_1,sz));
    
}