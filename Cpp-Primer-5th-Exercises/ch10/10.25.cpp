#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
using std::vector;
using std::string;
using namespace std::placeholders;
using std::cout;
using std::cin;
using std::endl;
bool check_size(const string &a,string::size_type l)
{
    return a.size()>=l;
}
void biggies(vector<string>&words,string::size_type sz)
{
    sort(words.begin(),words.end());
    auto er=unique(words.begin(),words.end());
    words.erase(er,words.end());
    stable_sort(words.begin(),words.end(),[](const string&a,const string&b){return a.size()<b.size();});
    auto pos=partition(words.begin(),words.end(),bind(check_size,_1,sz));
    for_each(words.begin(),pos,[](const string&a){cout<<a<<" ";});
    cout<<endl;
}
int main()
{
    vector<string> words;
    for(string word;cin>>word;words.push_back(word)){}
    biggies(words,3);
}