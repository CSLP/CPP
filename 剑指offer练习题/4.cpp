#include<iostream>
bool Find(int *matrix,int rows,int columns,int number)
{
    if(matrix==nullptr||rows<=0||columns<=0) return false;
    int i=0,j=columns-1;
    while(i<rows&&j>=0)
    {
        if(*(matrix+i*columns+j)==number) return true;
        else if(*(matrix+i*columns+j)>number) --j;
        else ++i;
    }
    return false;
}
void Test(char *testName,int *matrix,int rows,int columns,int number,bool expected)
{
    if(testName!=nullptr)
        printf("%s begins:",testName);
    bool result=Find(matrix,rows,columns,number);
    if(result==expected)
        printf("Passed.\n");
    else
    {
        printf("Failed.\n");
    }
}
void test1()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("test1",(int *)matrix,4,4,7,true);
}
void test2()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("test2",(int *)matrix,4,4,5,false);
}
void test3()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("test3",(int *)matrix,4,4,1,true);
}
void test4()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("test4",(int *)matrix,4,4,15,true);
}
void test5()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("test5",(int *)matrix,4,4,0,false);
}
void test6()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("test6",(int *)matrix,4,4,16,false);
}
void test7()
{
    Test("test6",nullptr,0,0,16,false);
}
int main(int argc,char *argv[])
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    return 0;
}