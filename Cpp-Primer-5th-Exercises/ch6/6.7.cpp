#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int test()
{
    static int tag=0;
    if(!tag) 
    {
        ++tag;
        return 0;
    }
    else return 1;

}
int main()
{
     cout<<test()<<endl;
     cout<<test()<<endl;
     cout<<test()<<endl;
     cout<<test()<<endl;
     cout<<test()<<endl;
}