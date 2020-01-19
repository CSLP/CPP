#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using std::istringstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::string;
int main()
{
    ifstream in("./ch9/9.49.in");
    string word;
    string result;
    string ascender_or_descender={"bdfhklgjpqy"};
    if(!in.is_open())  
    {
        cout<<"open file fail!"<<endl;
        return 0;
    }
    while(in>>word)
    {
        if((word.find_first_of(ascender_or_descender)==string::npos)&&(word.size()>result.size()))
        result=word;
    }
    if(result.size()==0)
        cout<<"No words"<<endl;
    else 
    cout<<result<<endl;
}