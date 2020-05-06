#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<stack>
using namespace std;
int searchInsert(vector<int>& nums, int target) 
{
    int lo=0,hi=nums.size();
    while(hi-lo>1)
    {
        int mid=(lo+hi)>>1;
        if(target<nums[mid]) hi=mid;
        else lo=mid;
    }
    return target<nums[lo]?lo-1:lo;
}
int main()
{
    vector<int> test{1,1,2};
    cout<<searchInsert(test,2);
    system("pause");
}