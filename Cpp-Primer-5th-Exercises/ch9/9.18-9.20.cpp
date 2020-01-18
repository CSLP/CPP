#include<iostream>
#include<string>
#include<deque>
#include<list>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;
using std::list;
int main()
{
    string x;
    deque<string> words;
    list<string> wordss;
    while(cin>>x) 
    {
        words.push_back(x); 
    }
    for(auto i=words.begin();i!=words.end();++i)    
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cin.clear();
    while(cin>>x) 
    {
        wordss.push_back(x); 
    }
    for(auto i=wordss.begin();i!=wordss.end();++i)    
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    list<int> ins{1,2,3,4,5,6,7,8,9,10};
    deque<int> odd,even;
    for(auto i:ins)
    {
        (i%2)?odd.push_back(i):even.push_back(i);
    }
    for(auto i:odd)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:even)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}