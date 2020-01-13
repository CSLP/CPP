#include<iostream>
#include<string>
#include<vector>   
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
    string word;
    vector<string> words;
    while(cin>>word)
    {
        words.push_back(word);
    }
    for(auto &a:words)
    {
        for(auto &b:a)
        b=toupper(b);
        cout<<a<<endl;
    }
}