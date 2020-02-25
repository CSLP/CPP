#include<cstring>
#include<cstdio>
void ReplaceBlank(char str[],int length)
{
    if(str==nullptr||strlen(str)==0) return;
    int blank=0;
    for(unsigned i=0;i<strlen(str);++i)
        if(str[i]==' ') blank++;
    int p=strlen(str),q=p+2*blank;
    if(q>length) return;
    while(p!=q)
    {
        if(str[p]==' ')
        {
            str[q]='0';str[q-1]='2';str[q-2]='%';--p;q-=3;
        }
        else str[q--]=str[p--];
    }
}
void test(char *testName,char str[],int length,char expected[])
{
    if(testName!=nullptr)
        printf("%s begings:",testName);
    ReplaceBlank(str,length);
    if(expected==nullptr&&str==nullptr)
        printf("passed.\n");
    else if(expected==nullptr&&str!=nullptr)
        printf("failed.\n");
    else if(strcmp(str,expected)==0)
        printf("passed\n");
    else 
        printf("failed.\n");
}
void test1()
{
    const int length=100;
    char str[length]="hello world";
    test("test1",str,length,"hello%20world");
}
void test2()
{
    const int length=100;
    char str[length]=" helloworld";
    test("test2",str,length,"%20helloworld");
}
void test3()
{
    const int length=100;
    char str[length]="helloworld ";
    test("test3",str,length,"helloworld%20");
}
void test4()
{
    const int length=100;
    char str[length]="hello  world";
    test("test4",str,length,"hello%20%20world");
}
void test5()
{
    test("test5",nullptr,0,nullptr);
}
void test6()
{
    const int length=100;
    char str[length]="";
    test("test6",str,length,"");
}
void test7()
{
    const int length=100;
    char str[length]=" ";
    test("test7",str,length,"%20");
}
void test8()
{
    const int length=100;
    char str[length]="helloworld";
    test("test8",str,length,"helloworld");
}
void test9()
{
    const int length=100;
    char str[length]="   ";
    test("test9",str,length,"%20%20%20");
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
    test8();
    test9();
}