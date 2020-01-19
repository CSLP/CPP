#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
class Date
{
public:
        Date()=default;
        Date(string);
        void print()
        {
            cout<<year<<"-"<<month<<"-"<<day<<endl;
        }
private:
        unsigned year=0;
        unsigned month=0;
        unsigned day=0;
};
Date::Date(string a)
{
//处理 1/1/1990 格式
    auto i=a.find_first_of("/");
    auto j=a.find_last_of("/"); 
    if(i!=string::npos&&j!=string::npos)
    {
        month=stoi(a.substr(0,i));
        day=stoi(a.substr(i+1,j-i-1));
        year=stoi(a.substr(j+1));
    }
    else//处理 Jan 1 1990 格式
    {
        auto l=a.find_first_of(" ,");
        auto m=a.find_last_of(" ,");
        if(l!=string::npos&&m!=string::npos)
        {
            day=stoi(a.substr(l+1,m-l-1));
            year=stoi(a.substr(m+1));
            auto mon=a.substr(0,i);
            if(mon.size()>=3)
            {
                auto abbr=mon.substr(0,3);
                switch(abbr[0])
                {
                    case 'J':
                    {
                        if(abbr=="Jan") month=1;
                        if(abbr=="Jul") month=7;
                        if(abbr=="Jun") month=6;
                        break;
                    }
                    case 'F':month=2;break;
                    case 'A':
                    {
                        if(abbr=="Apr") month=4;
                        if(abbr=="Aug") month=8;
                        break;
                    }
                    case 'M':month=5;break;
                    {
                        if(abbr=="May") month=5;
                        if(abbr=="Mar") month=3;
                        break;
                    }
                    case 'S':month=9;break;
                    case 'O':month=10;break;
                    case 'N':month=11;break;
                    case 'D':month=12;break;
                    default :month=0;break;
                }
            }
            else
            {
                cout<<"格式错误"<<endl;
            }
            
        }
        else year=month=day=0;
    }
}
int main()
{
    Date  a;
    Date b("January 1,1900");
    Date c("1/1/1990");
    Date d("Jan 1 1900");
    a.print();
    b.print();
    c.print();
    d.print();
}