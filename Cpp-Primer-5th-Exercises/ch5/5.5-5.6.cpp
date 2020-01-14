#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
    int a ;string curScore;
    vector<string> scores={"F","D","C","B","A","A++"};
    while(cin>>a)
    {
        if(a<60)
            cout<<scores[0]<<endl;
        else
        {
            curScore=scores[(a-50)/10];
            if(a%10>7)
                cout<<curScore+'+'<<endl;
            else if(a!=100&&a%10<3)
            {
                cout<<curScore+'-'<<endl;
            }
            else
            {
                cout<<curScore<<endl;
            }
            
            
        }
        (a<60)?cout<<"F"<<endl:(a==100)?cout<<"A++"<<endl:(a%10<3)?cout<<scores[(a-50)/10]+'-'<<endl:(a%10>7)?cout<<scores[(a-50)/10]+'+'<<endl:cout<<scores[(a-50)/10]<<endl;
        

    }
}