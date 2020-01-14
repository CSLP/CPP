#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    vector<int> a={1,2,3,4,5,6,9,10};
    for(auto & i:a)
        (i%2)?i*=2:i=i;
    for(const auto &i:a)
        cout<<i<<" ";
    cout<<endl;
}