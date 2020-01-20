#include<iostream>
#include<map>
#include<fstream>
using namespace std;
void dealWith(string &a)
{
    for(auto i=a.begin();i!=a.end();)
    {
        if(!isalpha(*i))
            i=a.erase(i);
        else if(isupper(*i))
             {
                 *i=tolower(*i);
                 ++i;
             }
             else ++i;
    }
}
int main()
{
    map<string,size_t> wordsCnt;
    ifstream in("./ch11/11.4.in");
    string word;
    while(in>>word)
    {
        dealWith(word);
        if(word.size()) ++wordsCnt[word];
    }
    for(const auto&i:wordsCnt)
    {
        cout<<i.first<<":"<<i.second<<endl;
    }
}