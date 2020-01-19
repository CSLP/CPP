#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//预处理，删除空格，判断负号,调用braMatch函数判断括号是否匹配,并转换成为vector<string>  
//好好学习,天天向上啊
vector<string> preProcess(const string &s);
void braMatch(const string &s);
void print(const string &s);
void calculate(stack<int> &,char);
int getPriority(char );
int evaMidExpression(const string &);
int main()
{
	try
	{
       	string test1="-((   1-21  )*3/(5+11)+-8)*12+23 ";
	    string test="((3+5*2)+3)/5+(-6)/4*2+3";
	    print(test1);	
	    preProcess(test1);
	    cout<<"求值顺序:";
	    cout<<evaMidExpression(test1)<<endl; 
	    cout<<-((1-21)*3/(5+11)+(-8))*12+23<<endl;
	}
	catch(runtime_error err)
	{
		cout<<err.what()<<endl;
	}
}
vector<string> preProcess(const string &s)
{
	braMatch(s);
	//转换为vector<string>使数字挨在一起,同时去掉空格
	vector<string> mean;
	bool flag=false;
	for(auto ti=s.begin();ti!=s.end();ti++)
	{
		string x(1,*ti);
		auto dig=isdigit(*ti);
		if(!dig&&*ti!=' ')
		{
			if(*ti=='-'&&(ti==s.begin()||!isdigit(*(ti-1))&&*(ti-1)!=')'))
			{
				x[0]='#';
			}
			flag=false;
			mean.push_back(x);
		}
		if(dig)
		{
			if(flag==true) 
			{
				*(mean.end()-1)+=x;
			}
			else
			{
				flag=true;
				mean.push_back(x);
			}
		}
	
	}
	/*	
	for(int i=0;i<s.size();++i)//使数字连起来的第二种思路
	{
		auto dig=isdigit(s[i]);
		if(!dig&&s[i]!=' ')
		{
			if(s[i]=='-'&&(i==0||!isdigit(s[i-1])&&s[i]!=')'))
			mean.push_back(string(1,'#'));
			else 
			mean.push_back(string(1,s[i]));
		}
		if(dig)
		{
			int j=i;
			while(j<s.size()&&isdigit(s[j]))
			{
				++j;
			}
			mean.push_back(s.substr(i,j-i));
			i=j-1;
		}

	}
	*/	
	return mean;
}
//braMatch　函数，不匹配抛出异常，匹配无操作
void braMatch(const string &s)
{
	stack<char> tell;
	for(auto x:s)
	{
		if(x=='(')
			tell.push(x);
		if(x==')')
		{
			if(!tell.empty())  tell.pop();
			else  
			throw runtime_error("Invalid  Expression:Brackets Not Matched!");
		}
	}
	if(!tell.empty())
	throw runtime_error("Invalid  Expression:Brackets Not Matched!");
}
void print(const string &s)
{
	for(auto x:s)
	{
		cout<<x;
	}
	cout<<endl;
}
void calculate(stack<int> &opd,char opr)
{
	int rt=0,lt=0,val=0;
	if(opr=='#')
	{
		val=-opd.top();
		opd.pop();
		opd.push(val);
		cout<<"#"<<" ";
		return ;
	}
	rt=opd.top();
	opd.pop();
	lt=opd.top();
	opd.pop();
	switch(opr) 
	{
		case '+':
		     {
			val=lt+rt;
			cout<<"+"<<" ";
			break;
		     }
		case '-':
		     {
			val=lt-rt;
			cout<<"-"<<" ";
			break;
		     }
		case '*':
		     {
			val=lt*rt;
			cout<<"*"<<" ";
			break;
		     }
		case'/':
		     {
			val=lt/rt;
			cout<<"/"<<" ";
			break;
		     }
		     
	}
	opd.push(val);

}
int getPriority(char opr)
{
	switch(opr)
	{
		case '#':return 3;
		case '*':
		case '/':return 2;
		case '+': 
		case '-':return 1;
		case '(':return 0;
	}
}
int evaMidExpression(const string &x )
{
	vector<string> s=preProcess(x);
	stack<int> opd;
	stack<string> opr;
	for(auto ti:s)
	{
		if(isdigit(ti[0]))
		{
			opd.push(stoi(ti));
		}
		else
		{
			if(ti=="(")
				opr.push(ti);
			else if(ti==")")
			{
				while(opr.top()!="(")
				{
					calculate(opd,opr.top()[0]);		
					opr.pop();
				}
				opr.pop();
			}
			else if(opr.empty()||getPriority(ti[0])>getPriority(opr.top()[0]))
			{
				opr.push(ti);
			}
			else 
			{
				while(!opr.empty()&&getPriority(opr.top()[0])>=getPriority(ti[0]))
				{
					calculate(opd,opr.top()[0]);
					opr.pop();
				}
				opr.push(ti);
			}
		}
	}
	while(!opr.empty())
	{
		calculate(opd,opr.top()[0]);
		opr.pop();
	}
	cout<<endl;
	return opd.top();
}
