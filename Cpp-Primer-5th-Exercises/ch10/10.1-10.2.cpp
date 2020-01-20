#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
using std::list;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a;
    string s;
    vector<int> num;
    list<string> nn;
    while(cin>>a)
        num.push_back(a);
    cin.clear();
    while(cin>>s)
        nn.push_back(s);
    cout<<count(num.begin(),num.end(),10)<<endl;
    cout<<count(nn.begin(),nn.end(),"CSLP")<<endl;
        
}