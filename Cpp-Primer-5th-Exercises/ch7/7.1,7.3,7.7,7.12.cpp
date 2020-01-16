#include<iostream>
#include"Sales_data.h"
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
int main()
{
//7.1
/*
    Sales_data total;
    double price;
    if(cin>>total.bookNo>>total.units_sold>>price)
    {
        total.revenue=total.units_sold*price;
        Sales_data cur;
        while(cin>>cur.bookNo>>cur.units_sold>>price)
        {
            cur.revenue=cur.units_sold*price;
            if(cur.bookNo==total.bookNo)
            {
                total.units_sold+=cur.units_sold;
                total.revenue+=cur.revenue;
            }
            else
            {
               cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" "<<total.revenue/total.units_sold<<endl;
               total=cur;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" "<<total.revenue/total.units_sold<<endl;

    }
    else
    {
        cerr<<"No data!"<<endl;
    }
*/
/*使用类接口的版本,当前类还未定义,所以不能使用
    Sales_data  total;
    if(read(cin,total))
    {
        Sales_data cur;
        while(read(cin,cur))
        {
            if(cur.isbn()==total.isbn())
            {
                total.combine(cur);
            }
            else
            {
                print(cout,total);
                total=cur;
            }
        }
        print(cout,total);
    }
    else
    {
        cerr<<"No data?!"<<endl;
    }
*/
//7.3
/*
    Sales_data total;
    double price;
    if(cin>>total.bookNo>>total.units_sold>>price)
    {
        total.revenue=total.units_sold*price;
        Sales_data cur;
        while(cin>>cur.bookNo>>cur.units_sold>>price)
        {
            cur.revenue=cur.units_sold*price;
            if(total.isbn()==cur.isbn())
            {
                total.combine(cur);
            }
            else
            {
               cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" "<<total.revenue/total.units_sold<<endl;
               total=cur;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" "<<total.revenue/total.units_sold<<endl;

    }
    else
    {
        cerr<<"No data!"<<endl;
    }
*/
//7.7
/*
    Sales_data total;
    double price;
    if(read(cin,total))
    {
        Sales_data cur;
        while(read(cin,cur))
        {
            if(total.isbn()==cur.isbn())
            {
                total.combine(cur);
            }
            else
            {
               print(cout,total);
               total=cur;
            }
        }
            print(cout,total);
    }
    else
    {
        cerr<<"No data!"<<endl;
    }
*/
//7.12  自己版本,有点垃圾,cin>>a,也可以先cin>>a在判断cin的状态,cin>>a,if(cin)与if(cin>>a);等价
/*
    Sales_data total(cin);
    double price;
        Sales_data cur;
        while(read(cin,cur))
        {
            if(total.isbn()==cur.isbn())
            {
                total.combine(cur);
            }
            else
            {
               print(cout,total);
               total=cur;
            }
        }
            print(cout,total);

*/
//7.12 pro
    Sales_data total(cin);
    if(cin)
    {
        Sales_data cur(cin);
        while(cin)
        {
            if(total.isbn()==cur.isbn())
                total.combine(cur);
            else
            {
                print(cout,total);
                total=cur;
            }
            read(cin,cur); 
        }
        print(cout,total);
    }
    else
    {
        cout<<"No Data!"<<endl;
    }
    
}