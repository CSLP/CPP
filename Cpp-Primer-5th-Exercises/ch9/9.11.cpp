#include<vector>
using std::vector;
//vector的六种初始化方法
int main()
{
    vector<int> a;
    vector<int> b;
    vector<int> b{a,b,c,...};vector<int> b={a,b,c,...};
    vector<int> b(a);vector<int> b=a; 
    vector<int> b(a,e);//a,e are iterator;
    vector<int> b(n,t);//n element 数量,t元素值
    vector<int> b(n);
}