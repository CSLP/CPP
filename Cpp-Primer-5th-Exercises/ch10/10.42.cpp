#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
    list<string> words;
    for(string word;cin>>word;words.push_back(word)){}
    words.sort();
    for(const auto&i:words)
        cout<<i<<" ";
    cout<<endl;
    words.unique();
    for(const auto&i:words)
        cout<<i<<" ";
    cout<<endl;
}