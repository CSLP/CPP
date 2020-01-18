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
            auto pos=s.erase(i,i+oldVal.size());
            s.insert(pos,newVal.begin(),newVal.end());
            i=pos;
        }
        else
        {
            ++i;
        }
        
    }
}
int main()
{
    std::string s{"r u ok?\ngo thru\ntho tho altho\nthrough thruu"};
    std::cout << "Old:\n" << s << std::endl;
    replaceStr(s, "tho", "though");
    std::cout << "\nNew:\n" << s << std::endl;
    // replaceStr(s, "thru", "through");
    // std::cout << "\nNew:\n" << s << std::endl;
    // replaceStr(s, "hl", "hello");
    // std::cout << "\nNew:\n" << s << std::endl;
    // replaceStr(s, "u", "you");
    // std::cout << "\nNew:\n" << s << std::endl;
}