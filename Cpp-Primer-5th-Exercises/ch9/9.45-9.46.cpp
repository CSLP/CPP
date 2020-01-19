#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
string addFix(const string &nme,const string &prefix,const string &suffix)
{
     string name=nme;
     name.insert(name.begin(),prefix.begin(),prefix.end());
     name.append(suffix);
     return name;
}
string addFix1(const string &nme,const string &prefix,const string &suffix)
{
    //return prefix+" "+nme+" "+suffix
     string name=nme;
     name.insert(0,prefix);
     name.insert(name.size(),suffix);
     return name;
}
int main()
{
    string prefix="CS",suffix="NB";
    cout<<addFix1("LP","CS","NB")<<endl;
}