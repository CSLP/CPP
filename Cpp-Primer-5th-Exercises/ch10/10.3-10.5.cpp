#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<numeric>
using std::list;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    vector<int> x{1,2,3,4,5,6,7,8,9,10};
    vector<double> y{0.1,0.2,3.3};
    vector<const char*> z{"cslp","wuyulp"};
    list<const char*> q{"cslp","wuyulp"};
    cout<<accumulate(x.cbegin(),x.cend(),0)<<endl;
    cout<<accumulate(y.cbegin(),y.cend(),0.0)<<endl;
    cout<<equal(z.begin(),z.end(),q.begin());
}