#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
using std::string;
class Sales_data
{
public:
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
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

#endif