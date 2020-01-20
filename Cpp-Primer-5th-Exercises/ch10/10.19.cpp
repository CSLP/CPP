#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
void biggies(vector<string>&words,string::size_type sz)
{
    sort(words.begin(),words.end());
    auto er=unique(words.begin(),words.end());
    words.erase(er,words.end());
    stable_sort(words.begin(),words.end(),[](const string&a,const string&b){return a.size()<b.size();});
    auto pos=stable_partition(words.begin(),words.end(),[sz](const string&a){return a.size()>=sz;});
    for_each(words.begin(),pos,[](const string&a){cout<<a<<" ";});
    cout<<endl;
}
int main()
{
    vector<string> words;
    for(string word;cin>>word;words.push_back(word)){}
    biggies(words,3);
}