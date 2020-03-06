#include"MatricChainOrder.h"
#include<iomanip>
int main()
{
    int p[7]={30,35,15,5,10,20,25};
    // int p[4]={10,100,5,50};
    int n=6;
    // int n=3;
    int m[36]={0};
    // int m[9]={0};
    int s[36]={0};
    // int s[9]={0};
    cout<<matricChainOrder(p,n,m,s)<<endl;
    for(int i=0;i<36;++i)
    {
        if(i!=0&&!(i%6)) cout<<endl;
        cout<<setw(5)<<m[i]<<" ";
    }
    cout<<endl;
    print(1,n,s,n);
    system("pause");
}