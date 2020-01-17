#include<iostream>
#include<sstream>
#include<string>
#include<fstream>
#include<vector>
using std::string;
using std::vector;
using std::istringstream;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
int main(int argc ,char * argv[])
{
    vector<string> article;
    string fileName;
    cin>>fileName;
    ifstream in(fileName);
    istringstream line;
    string lin;
    string word;
    if(in)
    {
        while(getline(in,lin)) 
            article.push_back(lin);
        for(const auto &i :article)
            cout<<i<<endl;
        for(const auto &li:article)
        {
            line.str(li);
            while(line>>word)
                cout<<word<<"*";
            cout<<endl;
            line.clear();
        }
    }
    else
    {
        cerr<<"Open wrong"<<endl;
    }
    
}