#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"Sales_data.h"
#include<fstream>
using std::ifstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;
bool compareIsbn(const Sales_data &a,const Sales_data &b)
{
    return a.isbn()<b.isbn();
}
int main()
{
    ifstream in("./ch10/10.12.in");
    if(!in.is_open())
    {
        cout<<"Open File Faile!";
        return 0;
    }
    vector<Sales_data> vec;
    for(Sales_data tmp;read(in,tmp);vec.push_back(tmp)){}
    for(const auto &i:vec)
        print(cout,i);
    cout<<endl;
    sort(vec.begin(),vec.end(),compareIsbn);
    for(const auto &i:vec)
        print(cout,i);
    cout<<endl;


}