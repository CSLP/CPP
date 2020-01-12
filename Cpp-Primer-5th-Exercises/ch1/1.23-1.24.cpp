#include<iostream>
#include<string>
#include"Sales_item.h"
using namespace std;
int main()
{
    Sales_item book,temp;
    int cnt=0;
    if(cin>>book) 
    {
        cnt=1;
        while(cin>>temp)
        {
            if(book.isbn()==temp.isbn())
            {
               book+=temp;
               cnt++;
            }
            else 
            {
               cout<<book<<endl;
               cout<<book.isbn()<<": "<<cnt<<endl;
               book=temp;
               cnt=1;
            }
        }
        cout<<book<<endl;
        cout<<book.isbn()<<": "<<cnt<<endl;
    }
}