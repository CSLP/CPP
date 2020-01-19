//一个字符串中缀表达式转换为后缀并计算验证结果
#include<iostream>
#include<vector> 
#include<stack> 
using namespace std; 
vector<string> midToRPN(const string&);
int evalRPN(const vector<string> &);
int getPriority(const string&);
int main()
{
	string test1="-(4+(-2)/5-9)*3";	
	string test="((3+5*2)+3)/5+(-6)/4*2+3";
	for(auto x:midToRPN(test))
	{
		cout<<x;
	}
	cout<<endl;
	cout<<evalRPN(midToRPN(test));
	cout<<endl;
	cout<<((3+5*2)+3)/5+(-6)/4*2+3;
}
int getPriority(const string &opr)
{
	switch(opr[0])
	{
		case '#':return 3;
		case '*':
		case '/':return 2;
		case '+': 
		case '-':return 1;
		case '(':return 0;
		case ')':return -1;
	}
}

vector<string> midToRPN(const string&str)
{
/*字符串的处理，由普通字符串处理成为vector<string>,下面看起来复杂时因为将-号分成三种，一种为减号，
 *一种为-(a+b)形式的负号，另一种为(-2)形式的负号，后一种负号直接和数字搞到一起成为负数，前一种负号
 *当做一种特殊的操作符,这样做比较复杂使后面也复杂，所以不建议这样，直接都看成操作符负号．负号好不特殊,完全可以作为一个高优先及的
 *运算符号来统一,根本不特殊号码,以后就别搞这么花里胡哨了.
*/
	string s=str;
	vector<string> tokens;
	for(int i=0;i<s.size();++i)
	{
		auto dig=isdigit(s[i]);
		if(!dig&&s[i]!=' ')
		{
			if(s[i]=='-'&&s[i+1]=='(')
				tokens.push_back(string(1,'#'));
			else if(s[i]=='-'&&isdigit(s[i+1])&&(i==0||!isdigit(s[i-1])&&s[i-1]!=')'))
				s[i]='$';
			else tokens.push_back(string(1,s[i]));
		}
		if(dig)
		{
			int j=i;
			while(isdigit(s[j])&&j<s.size())
				++j;
			if(i>0&&s[i-1]=='$')
				tokens.push_back(s.substr(i-1,j-i+1));
			else
				tokens.push_back(s.substr(i,j-i));
			i=j-1;
		}
	}
	for(auto &x:tokens)
	{
		if(x[0]=='$')
			x[0]='-';
	}
	vector<string> rpn;
	stack<string> opr;
	for(auto x:tokens)
	{
		auto y=x.find_first_of("()+-*/#");
		if(y==string::npos)
			rpn.push_back(x);
		else
		{
			if(opr.empty())
				opr.push(x);
			else if(x=="("||getPriority(x)>getPriority(opr.top()))
				opr.push(x);
			else if(x==")") 
			{
				while(opr.top()!="(")
				{
					rpn.push_back(opr.top());	
					opr.pop();
				}
				opr.pop();
			}
			else 
			{
				while(!opr.empty()&&getPriority(x)<=getPriority(opr.top()))
		       	        {
					rpn.push_back(opr.top());	
					opr.pop();
				}
				opr.push(x);
			}
				

		}
	}
	while(!opr.empty()) 
	{
		rpn.push_back(opr.top());opr.pop();
	}
	return rpn;
}
int evalRPN(const vector<string> &test) 
{
	vector<string> s(test);
	stack<int> cal;
	for(auto x:s)
	{
		if(x.size()>1&&x.find_first_of("-")!=string::npos)
			x[0]='@';
		if(x.find_first_of("#+-*/")!=string::npos)
		{
			if(x.find_first_of("+-*/")!=string::npos)
			{
			     auto rv=cal.top();cal.pop();	
			     auto lv=cal.top();cal.pop();
			     switch(x[0])
			     {
				     case '+':cal.push(lv+rv);break;
				     case '-':cal.push(lv-rv);break;
				     case '*':cal.push(lv*rv);break;
				     case '/':cal.push(lv/rv);break;
			     }
			}
			else
			{
				auto rv=cal.top();cal.pop();
				cal.push(-rv);
			}

		}
		else 
		{
		        if(x.size()>1&&x.find_first_of("@")!=string::npos)
			x[0]='-';
			cal.push(stoi(x));
		}
	}
	return cal.top();

}
