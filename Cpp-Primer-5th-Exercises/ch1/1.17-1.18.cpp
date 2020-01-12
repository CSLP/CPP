#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int curVal=0,val=0,cnt=0;
    if(cin>>curVal)
    {
        cnt=1;
        while(cin>>val)
        {
            if(val==curVal)
            {
                cnt++;
            }
            else
            {
                cout<<curVal<<": "<<cnt<<"times"<<endl;
                cnt=1;
                curVal=val;
            }
            
        }
        cout<<curVal<<": "<<cnt<<"times"<<endl;
    }
}