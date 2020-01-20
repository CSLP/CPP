#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"Sales_data.h"
#include<fstream>
using std::ifstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
bool charFive(const string &a)
{
    return a.size()>=5;
}
int main()
{
    vector<string> words;
    for(string tmp;cin>>tmp;words.push_back(tmp));
    auto pos=partition(words.begin(),words.end(),charFive);
    for(auto i=words.begin();i!=pos;++i)
        cout<<*i<<" ";
    cout<<endl;
}