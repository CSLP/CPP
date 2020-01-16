#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
#include<iostream>
using std::istream;
using std::ostream;
using std::string;
using std::endl;
class Sales_data
{
    public:
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    // Sales_data()=default; 
    Sales_data():units_sold(0),revenue(0){};
    Sales_data(const string &a):bookNo(a){};
    Sales_data(const string &a,unsigned u,double p):bookNo(a),units_sold(u),revenue(u*p){};
    Sales_data(istream&a);
    // {
    //     read( a,*this);
    // }

    string isbn() const
    { return bookNo;}
    Sales_data & combine(const Sales_data&);
};
Sales_data & Sales_data::combine(const Sales_data&x)
{
    units_sold+=x.units_sold;
    revenue+=x.revenue;
    return *this;
}
istream & read(istream & in,Sales_data & a)
{
    double price;
    in>>a.bookNo>>a.units_sold>>price;
    a.revenue=a.units_sold*price;
    return in;
}
Sales_data::Sales_data(istream &a)
{
    read(a,*this);
}
ostream & print(ostream &out,const Sales_data &b)
{
    out<<b.bookNo<<" "<<b.units_sold<<" "<<b.revenue<<" "<<b.revenue/b.units_sold<<" "<<endl;
    return out;
}
Sales_data add(const Sales_data &a,const Sales_data &b)
{
    Sales_data temp=a;
    temp.combine(b);
    return temp;
}

#endif