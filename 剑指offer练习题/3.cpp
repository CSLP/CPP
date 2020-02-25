#include<cstdio>
#include<iostream>
using std::cout;
/*
 *v1  快速排序递归版+扫描  O(nlogin+n)+O(1){时间+空间复杂度}
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
    if(hi-lo<2) return;
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
*/
// *v1.0 快速排序迭代版+扫描 O(nlogn+n)+O(1)
int partition(int *numbers,int lo,int hi)
{
    int pivot=numbers[lo];
    while(numbers[--hi]>=pivot);
    numbers[lo]=numbers[hi];
    while(numbers[--lo]<=pivot);
    numbers[hi]=numbers[lo];
    numbers[lo]=pivot;
}
void quickSort(int *numbers,int lo,int hi)
{
    while(lo!=hi)
    {
        int mi=partition(numbers,lo,hi);
        partitioon
    }
}
/*
* v1.1 递归归并排序(占用n辅助空间)+扫描  O(nlogin+n)+O(n){时间+空间复杂度}
void mergeSort1(int *numbers,int lo,int hi) 
{
    if(hi-lo<2) return;
    int mi=(lo+hi)/2;
    mergeSort1(numbers,lo,mi);
    mergeSort1(numbers,mi,hi);
    int n1=mi-lo,n2=hi-mi;
    int l=lo,m=mi;
    int *a=new int[n1];
    for(unsigned i=0;i<n1;++i)
        a[i]=numbers[l++];
    int *b=new int[n2];
    for(unsigned j=0;j<n2;++j)
        b[j]=numbers[m++];
    int i=0,j=0;
    while(i<n1||j<n2)
    {
        while((i<n1)&&(j>=n2||a[i]<=b[j])) numbers[lo++]=a[i++];
        while((j<n2)&&(i>=n1||b[j]<=a[i])) numbers[lo++]=b[j++];
    }
    delete []a;delete[]b;a=b=nullptr;
bool duplicate(int numbers[],int length,int *duplication)
{
    if(length>0)
    {
        mergeSort1(numbers,0,length);
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
*/
/*
* v1.2递归归并排序(占用n/2辅助空间)+扫描
void mergeSort2(int *numbers,int lo,int hi)
{
    if(hi-lo<2) return;
    int mi=(lo+hi)/2;
    mergeSort2(numbers,lo,mi);
    mergeSort2(numbers,mi,hi);
    int n1=mi-lo,n2=hi-mi;
    int l=lo;
    int *a=new int[n1];
    for(unsigned i=0;i<n1;++i)
        a[i]=numbers[l++];
    int i=0,j=mi;
    while(i<n1||j<hi)
    {
        while(i<n1&&(j>=hi||a[i]<=numbers[j])) numbers[lo++]=a[i++];
        while(j<hi&&(i>=n1||numbers[j]<=a[i])) numbers[lo++]=numbers[j++];//切记两个队头比较时记得等于的情况
    }
    delete []a;a=nullptr;
}
bool duplicate(int numbers[],int length,int *duplication)
{
    if(length>0)
    {
        mergeSort2(numbers,0,length);
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
*/


/*
 *v2  哈希表+原数组  O(n+n)+O(n){时间+空间复杂度}
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