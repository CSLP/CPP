#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    vector<string> words;
    for(string word;cin>>word;words.push_back(word)){}
    sort(words.begin(),words.end());
    auto pos=unique(words.begin(),words.end());
    words.erase(pos,words.end());
    cout<<count_if(words.begin(),words.end(),[](const string &a){return a.size()>=6;});
    
}