#include<iostream>
#include<stack>
#include<string>
#include<list>
#include<vector>
#include<cctype>
using std::string;
using std::vector;
using std::stack;
using std::list;
using std::cout;
using std::cin;
using std::endl;
double cumpute(const string &e)
{
    vector<string> expr;
    string numbers="0123456789";
    for(string::size_type pos=0;pos<e.size();)
    {
        if(pos==0&&!isdigit(e[pos]))
        {
            if(e[pos]=='(')
            {
                expr.push_back("(");
                ++pos;
                continue;
            }
            else
            {
               auto i=e.find_first_not_of(numbers); 
               expr.push_back(string(e,pos,i-pos));
               pos=i;
               continue;
            }
        }
        if(!isdigit(e[pos]))
        {
            if(e[pos]=='('||e[pos]==')')
            {
                expr.push_back(string(1,e[pos]));
                ++pos;
                continue;
            }
            else
            {
                if(e[pos]=='*'||e[pos]=='/')
                {
                    expr.push_back(string(1,e[pos]));
                    ++pos;
                    continue;
                }
                else 
                {
                    if(isdigit(e[pos+1])&&isdigit(e[pos-1]))
                    {
                        expr.push_back(string(1,e[pos]));
                        ++pos;
                        continue;
                    }
                    else
                    {
                        auto j=e.find_first_not_of(numbers,pos+1);
                        if(j!=string::npos)
                        {
                            expr.push_back(string(e,pos,j-pos));
                            pos=j;
                            continue;
                        }
                        else
                        {
                            expr.push_back(string(e,pos));
                            pos=e.size();
                            continue;
                        }
                        
                    }
                    
                }
            }
        }
        auto k=e.find_first_not_of(numbers,pos);
        if(k!=string::npos)
        {
            expr.push_back(string(e,pos,k-pos));
            pos=k;
            continue;
        }
        else
        {
            expr.push_back(string(e,pos));
            pos=e.size();
            continue;
        }
    }
//失败的自我创造
    // auto x=expr.begin();
    // ++x;
    // for(auto pre=expr.begin();x!=expr.end();)
    // {
    //     if(*x=="*"||*x=="/")
    //     {
    //         expr.insert(pre,"(");
    //         ++x;++x;
    //         pre=expr.insert(x,")");
    //     }
    //     else 
    //     {
    //         ++x;++pre;
    //     }
    // }
    for(const auto &x:expr)
    {
        cout<<x<<"  ";
    }
    cout<<endl;
    stack<string> trans;
    vector<string> rpn;
    for(const auto &i:expr)
    {
        if(i.find_first_of(numbers)==string::npos)
        {
            if(i=="(")
            {
                trans.push(i);
            }
            else if(i=="+"||i=="-"||i=="*"||i=="/")
            {
                if(i=="+"||i=="-")
                {
                    while(trans.top()!="(")
                    {
                        rpn.push_back(trans.top());
                        trans.pop();
                    }
                    trans.push(i);
                }
                else
                {
                    while(trans.top()=="*"||trans.top()=="/")
                    {
                        rpn.push_back(trans.top());
                        trans.pop();
                    }
                    trans.push(i);
                }
            }
            else
            {
                while(trans.top()!="(")
                {
                    rpn.push_back(trans.top());
                    trans.pop();
                }
                trans.pop();
            }
        }
        else
        {
            rpn.push_back(i);
        }
    }
    while(!trans.empty())
    {
        rpn.push_back(trans.top());
        trans.pop(); 
    }
    for(const auto &j:rpn)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    stack<double> result;
    for(const auto &k:rpn)
    {
        if(k.find_first_of(numbers)!=string::npos)
        {
            result.push(stod(k));
        }
        else
        {
            double y=result.top();
            result.pop();
            double x=result.top();
            result.pop();
            switch(k[0])
            {
                case '+':result.push(x+y);break;
                case '-':result.push(x-y);break;
                case '*':result.push(x*y);break;
                case '/':result.push(x/y);break;
                default:break;
            }
        }
    }
    return result.top();
}
bool check(const string &e)
{
    stack<char> expr;
    for(auto i:e)
    {
        if(i=='(')
        expr.push(i);
        if(i==')')
        {
            if(expr.empty())
                return false;
            else
            {
                expr.pop();
            }
        }
    }
    return expr.empty();
}
int main()
{
    string expression("(-11+10-2*30)/-30");
    cout<<cumpute(expression)<<endl;
    // cout<<check(expression)<<endl;
}