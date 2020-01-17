#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::ifstream;
using std::endl;
int main(int argc,char* argv[])
{
    ifstream in(argv[1]);
    vector<string> lines;
    vector<string> liness;
    string line;
    // while(getline(in,line))
    // {
    //     lines.push_back(line);
    // }
    // for(const auto &a:lines)
    // {
    //     cout<<a<<endl;
    // }
    // in.clear();
//if(in).... 在用文件流对象之前最好确定他关联了文件.:
    while(in>>line)
    {
        liness.push_back(line);
    }
    for(const auto &a:liness)
    {
        cout<<a<<endl;
    }
    in.close();
}