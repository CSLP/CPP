#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    vector<char> x{'a','b','c','d','e','f'};
    string y(x.begin(),x.end());
    // string z(x.begin(),x.size());
    // string c(x.begin()+3,3);
    // cout<<y<<endl<<z<<endl<<c<<endl;
    cout<<y;
}