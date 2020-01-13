#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string sum,temp;
    while(cin>>temp)
        sum+=' '+temp;
    cout<<sum<<endl;
}