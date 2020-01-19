#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::endl;
using std::cout;
int main()
{
    vector<string> intString{"1","2","3","4","5"};
    vector<string> floatString{"1.1","1.2","1.3"};
    int sum=0;
    double summ=0;
    for(const auto &i:intString)
    {
        sum+=stoi(i);
    }
    for(const auto &i:floatString)
    {
        summ+=stod(i);
    }
    cout<<sum<<" "<<summ<<endl;
}