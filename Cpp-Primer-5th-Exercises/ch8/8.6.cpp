#include<fstream>
#include<iostream>
#include"Sales_data.h"
using std::ifstream;
using std::cout;
using std::endl;
int main(int argc,char *argv[])
{
    Sales_data total;
    ifstream in(argv[1]);
    if(read(in,total))
    {
        Sales_data trans;
        while(read(in,trans))
        {
            if(trans.isbn()==total.isbn())
                total.combine(trans);
            else
            {
                print(cout,total);
                total=trans;
            }
            
        }
        print(cout,total);
    }
    else
    {
        cout<<" no data !"<<endl;
    }
    
}