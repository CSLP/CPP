#include<iostream>
#include"Sales_item.h"
#include<iterator>
#include<numeric>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
bool compareIIsbn(const Sales_item&a,const Sales_item&b)
{
    return a.isbn()<b.isbn();
}
int main()
{
    ifstream in("./ch10/10.32.in");
    istream_iterator<Sales_item>  input(in),eof;
    ostream_iterator<Sales_item>  out(cout,"\n");
    vector<Sales_item> salesData(input,eof);
    vector<Sales_item> result;
    sort(salesData.begin(),salesData.end(),compareIIsbn);
    for(auto pos=salesData.begin();pos!=salesData.end();)
    {
        auto p=find_if(pos,salesData.end(),[pos](const Sales_item& x){return x.isbn()!=pos->isbn();});
        // result.push_back(accumulate(pos,p,*pos));
        out=accumulate(pos,p,*pos);
        pos=p;
    }
}