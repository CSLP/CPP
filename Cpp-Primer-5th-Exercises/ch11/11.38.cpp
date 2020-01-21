#include<iostream>
#include<map>
#include<unordered_map>
#include<fstream>
#include<vector>
#include<iterator>
#include<sstream>
using namespace std;
int main()
{
    ifstream inDict("./ch11/11.33.dict.in");
    ifstream inText("./ch11/11.33.text.in");
    unordered_map<string,string> dict;
    string line;
    if(!inDict.is_open()||!inText.is_open()) 
    {
        cerr<<"Open file Fail!"<<endl;
        return 0;
    }
    while(getline(inDict,line))
    {
        istringstream d(line);
        string oldWord,newWord,n;
        d>>oldWord;
        while(d>>n)
        {
            newWord+=n;
        }
        dict.insert({oldWord,newWord});
    }
    for(const auto &i:dict)
        cout<<i.first<<":"<<i.second<<endl;
    cout<<"****************************************************************"<<endl;
    vector<vector<string>> text;
    while(getline(inText,line))
    {
        istringstream t(line);
        vector<string> l;
        for(string s;t>>s;l.push_back(s)){};
        text.push_back(l);
    }
    for(const auto &i:text)
    {
        for(const auto &j:i)
            cout<<j<<" ";
        cout<<endl;
    }
    for(auto &i:text)
    {
        for(auto &j:i)
        {
            auto res=dict.find(j);
            if(res!=dict.end())
                j=res->second;
        }
    }
    cout<<"#######################################################################"<<endl;
    for(const auto &i:text)
    {
        for(const auto &j:i)
            cout<<j<<" ";
        cout<<endl;
    }
}