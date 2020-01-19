#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
void replaceStr(string&s,const string &oldVal,const string &newVal)
{
    for(auto i=s.begin();i<s.end()-oldVal.size()+1; )
    {
        auto j=oldVal.begin();
        auto k=i;
        for(;j!=oldVal.end();++j,++k)
        {
            if(*k!=*j)
                break;
        }
        if(j==oldVal.end())
        {
            // auto pos=s.erase(i,i+oldVal.size());
            // cout<<*pos<<endl;
            // // s.insert(pos,newVal.begin(),newVal.end());
            // i=pos;
            auto pos=i-s.begin();
            s.erase(pos,oldVal.size());
            s.insert(pos,newVal);
            i=s.begin()+pos+newVal.size();
        }
        else
        {
            ++i;
        }
        
    }
}
void replaceStr1(string&s,const string &oldVal,const string &newVal)
{
    for(decltype(s.size()) pos=0;pos<s.size();)
    {
        string::size_type i=0;
        for( string::size_type j=pos;i<oldVal.size();++i,++j)
            if(s[j]!=oldVal[i])
            break;
        if(i==oldVal.size())
        {
            s.replace(pos,oldVal.size(),newVal);
            pos+=newVal.size();
        }
        else
        {
            ++pos;
        }
        
        
    }
}
void replaceStr2(string&s,const string &oldVal,const string &newVal)
{
    for(string::size_type pos=0;pos<s.size();)
    {
        if(s.substr(pos,oldVal.size())==oldVal)
        {
            s.replace(pos,oldVal.size(),newVal);
            pos+=newVal.size();
        }
        else ++pos;
    }
}
int main()
{
    std::string s{"r u ok?\ngo thru\ntho tho altho\nthrough thruu"};
    std::cout << "Old:\n" << s << std::endl;
    replaceStr2(s, "tho", "though");
    std::cout << "\nNew:\n" << s << std::endl;
    // replaceStr(s, "thru", "through");
    // std::cout << "\nNew:\n" << s << std::endl;
    // replaceStr(s, "hl", "hello");
    // std::cout << "\nNew:\n" << s << std::endl;
    // replaceStr(s, "u", "you");
    // std::cout << "\nNew:\n" << s << std::endl;
}