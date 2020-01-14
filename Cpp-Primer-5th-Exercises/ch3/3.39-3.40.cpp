#include<iostream>
#include<vector>
#include<iterator> 
#include<cstring>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::strcpy;
using std::strcmp;
using std::strcat;
using std::string;
int main()
{
    string a="helloworld",b="hello"; 
    char *aa="helloworld",*bb="hello";
    (a>b)?(cout<<"a>b\n"):(cout<<"a<b\n");
    (strcmp(aa,bb)>0)?(cout<<"a>b\n"):(cout<<"a<b\n");
    char *ca="helloworld",*cb="hello";
    int n=strlen(ca)+strlen(cb)+1;
    char cc[n];
    strcpy(cc,ca);
    strcat(cc,cb);
    cout<<cc<<endl;
}