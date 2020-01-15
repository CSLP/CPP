#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
using std::runtime_error;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        // if(b==0)
        // throw runtime_error("除数不能为0");
        // cout<<a/b<<endl;
        
        try
        {
            if(b==0)
            throw runtime_error("除数不能为0");
            cout<<a/b<<endl;
        }
        catch(runtime_error err)
        {
            cout<<err.what()<<endl;
            cout<<" again:Y or not:N";
            char n;
            cin>>n;
            if(!cin||n=='N') break;
        }
    }
    
}