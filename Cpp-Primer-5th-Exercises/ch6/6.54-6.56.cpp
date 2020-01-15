#include<iostream>
#include<vector>
using std::vector;
using std::cout;
int mSum(int,int);
int mMultiply(int,int);
int mSubtract(int,int);
int mDivide(int,int);
using x=int (*)(int,int);
int main()
{
    vector<x> funcPointerVect;
    funcPointerVect.push_back(mSum);
    funcPointerVect.push_back(mSubtract);
    funcPointerVect.push_back(mMultiply);
    funcPointerVect.push_back(mDivide);
    int a=10,b=2;
    for(const auto &i:funcPointerVect)
        cout<<i(a,b)<<" ";
}
int mSum(int x,int y)
{
    return x+y;
}
int mMultiply(int x,int y)
{
    return x*y;
}
int mSubtract(int x,int y)
{
    return x-y;
}
int mDivide(int x,int y)
{
    return x/y;
}