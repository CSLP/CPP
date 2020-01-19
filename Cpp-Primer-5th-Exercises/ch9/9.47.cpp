#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
int main()
{
    string numbers="0123456789";
    string letters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s="ab2c3d7R4E6";
    string::size_type pos=0;
    while((pos=s.find_first_of(numbers,pos))!=string::npos)
    {
        cout<<s[pos];
        ++pos;
    }
    pos=0;
    cout<<endl;
    while((pos=s.find_first_not_of(letters,pos))!=string::npos)
    {
        cout<<s[pos];
        ++pos;
    }
    cout<<endl;
    pos=0;
    while((pos=s.find_first_of(letters,pos))!=string::npos)
    {
        cout<<s[pos];
        ++pos;
    }
    cout<<endl;
    pos=0;
    while((pos=s.find_first_not_of(numbers,pos))!=string::npos)
    {
        cout<<s[pos];
        ++pos;
    }
    cout<<endl;
}