#include<iostream>
#include<cassert>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
void print(const std::vector<int>::iterator &a,const std::vector<int>::iterator &b)
{
    #ifndef NDEBUG
    cout<<__FILE__<<": "<<__LINE__<<" "<<__TIME__<<" "<<__DATE__<<" "<<b-a<<endl;
    #endif
    if(a==b) return;
    cout<<*a<<" ";
    return print(a+1,b);
}
int main()
{
/* test
    int a=10,b=12;
    assert(a<b);
    if(a<b)
    std::cerr<<__FILE__<<" "<<__LINE__<<" "<<__TIME__<<" "<<__DATE__<<std::endl;
*/
    vector<int> x={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    print(x.begin(),x.end());
}