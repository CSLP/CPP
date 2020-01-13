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
    int a;
    vector<int> grade_level(11);
    while(cin>>a)
        ++*(grade_level.begin()+a/10);
    for(auto &a:grade_level)
        cout<<a<<"  ";
    cout<<endl;
}