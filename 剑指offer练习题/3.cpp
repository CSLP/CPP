#include<cstdio>
#include<iostream>
using std::cout;
//v1  快速排序+扫描  O(nlogin+n)+O(1){时间+空间复杂度}
int partition(int *numbers,int lo,int hi)
{
    int pivot=numbers[lo];
    while(hi>lo)
    {
        while(hi>lo&&numbers[--hi]>=pivot);
        numbers[lo]=numbers[hi];
        while(hi>lo&&numbers[++lo]<=pivot);
        numbers[hi]=numbers[lo];
    }
    numbers[lo]=pivot;
    return lo;
}
void quickSort(int *numbers,int lo,int hi)
{
    if(lo==hi) return;
    int mi=partition(numbers,lo,hi);
    quickSort(numbers,lo,mi);
    quickSort(numbers,mi+1,hi);
}
bool duplicate(int numbers[],int length,int *duplication)
{
    if(length>0)
    {
        quickSort(numbers,0,length);
        for(unsigned i=0;i<length-1;++i)
        {
            if(numbers[i]>=length) return false;
            if(numbers[i]==numbers[i+1]) 
            {
                *duplication=numbers[i];
                return true;
            }

        }
        return false;
    }
    else return false;
}
/*
 *v2  哈希表+原数组  O(n)+O(n){时间+空间复杂度}
bool duplicate(int numbers[],int length,int *duplication)
{
    if(length>0)
    {
        int * hash=new int[length];
        for(unsigned k=0;k<length;++k)//至关重要啊,一定要记得赋初值,否则hash中那些一次也没出现的值就是未定义的,,,,以后形成习惯,声明一个变量的同时一定要赋初值.如果时动态生成的数组,记得生成完毕后也要赋初值.
            hash[k]=0;
        for(unsigned i=0;i<length;++i)
        {
            if(numbers[i]>=length) 
            {
                delete [] hash;
                hash=nullptr;
                return false;
            }
            ++hash[numbers[i]];
        }
        for(unsigned j=0;j<length;++j)
        {
            if(hash[j]>1) 
            {
                *duplication=j;
                delete [] hash;
                hash=nullptr;
                return true;
            }
        }
        return false;
    }
    else 
        return false;
}
*/
bool contains(int array[],int length,int number)
{
    for(int i=0;i<length;++i)
        if(array[i]==number) return true;
    return false;
}
void test(char *testName,int numbers[],int lengthNubmers,int expected[],int expectedExpected,bool validArgument)
{
    printf("%s begins: ",testName);
    int duplication;
    bool validInput=duplicate(numbers,lengthNubmers,&duplication);
    if(validArgument==validInput)
    {
        if(validArgument)
        {
            if(contains(expected,expectedExpected,duplication))
                printf("Passed.\n");
            else
                printf("FAILED.\n"); 
        }
        else
            printf("Passed.\n");
    }
    else
        printf("FAILED.\n"); 
}
void test1()
{
    int numbers[]={2,1,3,1,4};
    int duplications[]={1};
    test("Test1",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int),true);
}
void test2()
{
    int numbers[]={2,4,3,1,4};
    int duplications[]={4};
    test("Test2",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int),true);
}
void test3()
{
    int numbers[]={2,4,2,1,4};
    int duplications[]={2,4};
    test("Test3",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int),true);
}
void test4()
{
    int numbers[]={2,1,3,0,4};
    int duplications[]={-1};
    test("Test4",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int),false);
}
void test5()//包含大于n-1的数
{
    int numbers[]={2,1,3,5,4};
    int duplications[]={-1};
    test("Test5",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int),false);
}
void test6()
{
    int *numbers=nullptr;
    int duplications[]={-1};
    test("Test6",numbers,0,duplications,sizeof(duplications)/sizeof(int),false);
}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
}