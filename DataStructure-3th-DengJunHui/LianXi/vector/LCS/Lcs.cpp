#include"Lcs.h"
int main()
{
    // string a="ABCBDAB";
    // string b="BDCABA";
    string a="ADB";
    string b="AB";
    cout<<lcsSimpleRe(a,b,a.size()-1,b.size()-1)<<endl;
    Lcs(a,b);
    system("pause");
}