#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main(int argc,char **argv)
{
    cout<<argc<<endl;
    for(int i=0;i<argc;i++)
    cout<<argv[i]<<" "<<endl;
}