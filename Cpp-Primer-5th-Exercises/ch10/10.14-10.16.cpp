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
    auto pos=find_if(words.begin(),words.end(),[sz](const string&a){return a.size()>=sz;});
    auto p=pos;
    for(;pos!=words.end();++pos)
        cout<<*pos<<" ";
    cout<<endl;
    for_each(pos,words.end(),[](const string&a){cout<<a<<" ";});
    cout<<endl;
}
int main()
{
    int x=10;
    auto a=[](int i,int j){return i+j;};
    auto b=[x](int k){return x+k;};
    cout<<a(1,2)<<endl;
    cout<<b(10)<<endl;
    vector<string> words;
    for(string word;cin>>word;words.push_back(word)){}
    biggies(words,3);
}