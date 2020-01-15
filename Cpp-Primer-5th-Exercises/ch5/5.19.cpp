#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    string a,b;
    do
    {
        cin>>a>>b;
        (a.size()<b.size())?cout<<a<<endl:cout<<b<<endl;
    } while (cin);
    
}