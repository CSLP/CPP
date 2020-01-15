#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    string pro,post;
//v1
/*
    while (cin>>post&&post!=pro)
    {
        pro=post;
    }
    if(cin) cout<<pro<< " "<<endl;
    else
    {
        cout<<"kong"<<endl;
    }
*/
//v2
    /*
    unsigned flag=0;
    do
    {
        cin>>post;
        if(post==pro) 
        {
            flag=1;
            break;
        }
        pro=post;
    } while (cin);
    (cin)?cout<<pro<<" "<<endl:cout<<" kong"<<endl; 
   */ 
//v3
    unsigned flag=0;
    do
    {
        cin>>post;
        if(pro==post)
        {
            flag=1;
            cout<<post<<endl;
            break;
        }
        else
        {
            pro=post;
        }
        
    } while (cin);
    if(!flag) cout<<"kong"<<endl;
    
}