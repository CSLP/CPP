#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
using std::string;
using std::vector;
using namespace std::placeholders;
using std::cout;
using std::cin;
using std::endl;
bool check_size(int a,const string &s)
{
    return a>s.size();
}
int main()
{
    vector<int> a{1,4,4,4,5,6,2,3,5,6,6,9,7,8,10};
    string str;
    cin>>str;
    cout<<*find_if(a.begin(),a.end(),bind(check_size,_1,str));
}