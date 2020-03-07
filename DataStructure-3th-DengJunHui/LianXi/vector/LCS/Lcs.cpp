#include"Lcs.h"
int main()
{
    string a="ABCBDAB";
    string b="BDCABAB";
    // string a="A";
    // string b="AB";
    cout<<lcsSimpleRe(a,b,a.size()-1,b.size()-1)<<endl;
    Lcs(a,b);
    // 衣带渐宽终不悔，为伊消得人憔悴
    //昨夜西风凋碧树，独上高楼，望尽天涯路:w
    system("pause");
}