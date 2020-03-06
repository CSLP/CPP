#include"Lcs.h"
int main()
{
    string a="ABCBDAB";
    string b="BDCABA";
    cout<<lcsSimpleRe(a,b,a.size()-1,b.size()-1);
    system("pause");
}