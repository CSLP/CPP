#include<iostream>
bool isDuplicated(const int *numbers,int length,int lo,int hi)
{
    int sum=0;
    for(unsigned i=0;i<length;++i)
        if(numbers[i]>=lo&&numbers[i]<=hi) ++sum;
    if(sum>(hi-lo+1)) return true;
    return false;
}
int getDuplication(const int *numbers,int length)
{
    for(unsigned i=0;i<length;++i)
        if(numbers[i]>length-1||numbers[i]<=0) return -1;
    if(numbers==nullptr||length<=0) return -1;
    int lo=1,hi=length-1;
    while(hi>lo)
    {
        int mi=(lo+hi)>>1;
        if(isDuplicated(numbers,length,lo,mi)) hi=mi;
        else lo=mi+1;
    }
    return lo;
}
void test(const char *testName,int *numbers,int length,int *duplications,int dupLength)
{
    int result=getDuplication(numbers,length);
    for(int i=0;i<dupLength;++i)
    {
        if(result==duplications[i])
        {
            std::cout<<testName<<" passed."<<std::endl;
            return ;
        }
    }
    std::cout<<testName<<" FAILED."<<std::endl;
}
void test1()
{
    int numbers[]={2,3,5,4,3,2,6,7};
    int duplications[]={2,3};
    test("test1",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test2()
{
    int numbers[]={3,2,1,4,4,5,6,7};
    int duplications[]={4};
    test("test1",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test3()
{
    int numbers[]={1,2,3,4,5,6,7,1,8};
    int duplications[]={1};
    test("test3",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test4()
{
    int numbers[]={1,7,3,4,8,2,5,6,8,2,8};
    int duplications[]={2,8};
    test("test4",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test5()
{
    int numbers[]={1,1};
    int duplications[]={1};
    test("test5",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test6()
{
    int numbers[]={3,2,1,3,4,5,6,7};
    int duplications[]={3};
    test("test6",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test7()
{
    int numbers[]={1,2,2,6,4,5,6};
    int duplications[]={2,6};
    test("test7",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test8()
{
    int numbers[]={1,2,2,6,4,5,2};
    int duplications[]={2};
    test("test8",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test9()
{
    int numbers[]={1,2,6,4,5,3};
    int duplications[]={-1};
    test("test9",numbers,sizeof(numbers)/sizeof(int),duplications,sizeof(duplications)/sizeof(int));
}
void test10()
{
    int *numbers=nullptr;
    int duplications[]={-1};
    test("test10",numbers,0,duplications,sizeof(duplications)/sizeof(int));
}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
}

