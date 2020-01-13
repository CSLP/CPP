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
    vector<string> text;
    string str;
    while(getline(cin,str))
        text.push_back(str);
    for(auto it=text.begin();it!=text.end()&&!it->empty();++it)
    {
        for(auto &i:*it)
            if(isalpha(i))
                i=toupper(i);
        cout<<*it;
    }
    cout<<endl;
    vector<int> x(10,10);
    for(auto a=x.begin();a!=x.end();++a)
        *a*=2;
    for(auto b:x)
        cout<<b<<" ";
}