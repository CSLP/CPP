#include<fstream>
#include<iostream>
#include"Sales_data.h"
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
int main(int argc,char *argv[])
{
    Sales_data total;
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    if(read(in,total))
    {
        Sales_data trans;
        while(read(in,trans))
        {
            if(trans.isbn()==total.isbn())
                total.combine(trans);
            else
            {
                print(out,total);
                total=trans;
            }
            
        }
        print(out,total);
    }
    else
    {
        cout<<" no data !"<<endl;
    }
    
}