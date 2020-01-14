#include<iostream>
#include<vector>
#include<iterator>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
// bool compare_array(int a[],int b[])
// {
//     if((end(a)-begin(a))!=(end(b)-begin(b)))
//         return false;
//     else
//     {
//        auto n=end(a)-a; 
//        for(decltype(n) i=0;i<n;++i)
//         if(a[i]!=b[i])
//         return false;
//     }
//     return true;
    
// }
bool compare_vector(const vector<int> &a,const vector<int>&b)
{
    // (a==b)?(return true):(return false);
    if(a==b)
        return true;
    else
        return false;
    
}
int main()
{
    int array[6]={1,2,3,4,5,6};
    int b[6]={1,2,3,4,5,6};
    if((end(array)-array)!=(end(b)-b))
        cout<<"array unequal"<<endl;
    else
    {   bool tag=true;
        auto n=end(array)-array;
        for(decltype(n) i=0;i<n;++i)
            if(array[i]!=b[i])
            tag=false;
        tag?(cout<<"array equal!\n"):(cout<<"array unequal!\n");
    }
    
    vector<int> aa,bb; 
    for(auto *a=array,*b=end(array);a!=b;++a)
        aa.push_back(*a);
    for(auto *a=b,*i=end(b);a!=i;++a)
        bb.push_back(*a);
    //范围for它不香吗
    // for(decltype(aa.size()) i=0;i<aa.size();++i)
    //     cout<<aa[i]<<" ";
    // cout<<endl;
    // for(auto i=bb.cbegin();i!=bb.cend();++i)
    //     cout<<*i<<" ";
    // cout<<endl;
    // compare_array(array,b)?(cout<<"array equal!\n"):(cout<<"array unequal!\n");
    for(auto &a:aa)
        cout<<a<<" ";
    cout<<endl;
    for(auto &a:bb)
        cout<<a<<" ";
    cout<<endl;
    compare_vector(aa,bb)?(cout<<"vector equal!\n"):(cout<<"vector unequal!\n");
    //置0
    int *p=array;
    int *q=end(array);
    for(int *p=begin(array),*q=end(array);p!=q;++p)
        *p=0;
    // for(int *p=begin(array),*q=end(array);p!=q;++p)
        // cout<<*p<<" ";
    //范围for啊,至关重要,不管是对vector或者是string或者是普通的数组,能用范围for遍历就用范围for
    for(auto a:array)
        cout<<a<<" ";
    cout<<endl;

}