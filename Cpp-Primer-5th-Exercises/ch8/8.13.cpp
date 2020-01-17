#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::string;
struct PersonInfo
{
    string name;
    vector<string> phoneNum;
};
bool vaild(const  string &num)
{
    if(num.size()!=11)
        return false;
    for(auto i:num)
        if(i<'0'||i>'9')
            return false;
    return true;
}
string format(const string &num)
{
    return num.substr(0,3)+'-'+num.substr(3,4)+'-'+num.substr(7,4);
}
int main()
{
    ifstream fileIn("./ch8/8.13.in");
    vector<PersonInfo> personInfoList;
    string number;
    string line;
    istringstream lineInterpret;
    if(!fileIn.is_open())
    {
        cout<<"Open file failed!"<<endl;
        return -1;
    }
    while(getline(fileIn,line))
    {
        PersonInfo personInfo;
        lineInterpret.str(line);
        lineInterpret>>personInfo.name;
        while(lineInterpret>>number)
            personInfo.phoneNum.push_back(number);
        personInfoList.push_back(personInfo);
        lineInterpret.clear();
    }
    for(const auto&a:personInfoList) 
    {
        cout<<a.name<<":";
        for(const auto&b:a.phoneNum)
            cout<<b<<" ";
        cout<<endl;
    }
    cout<<"*************************************************************************"<<endl;
    for (const auto &i:personInfoList)
    {   
        ostringstream badNums,formatted;
        for(const auto&j:i.phoneNum)
        {
            if(!vaild(j))
                badNums<<" "<<j;
            else
            {
                formatted<<" "<<format(j);
            }
        }
        if(badNums.str().empty())
            cout<<i.name<<":"<<formatted.str()<<endl;
        else
        {
            cout<<i.name<<":input error,illegal numer"<<badNums.str()<<endl;
        }
        

    }
                                

}