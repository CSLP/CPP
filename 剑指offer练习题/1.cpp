#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class CMystring
{
public:CMystring(char*pData=nullptr);
       CMystring(const CMystring&str);
       ~CMystring(void);
       CMystring &operator=(const CMystring &str);
       void Print();
private:
       char * m_pData;
};
CMystring &CMystring::operator=(const CMystring&str)
{
    if(this==&str)
        return *this;
    delete []m_pData;
    m_pData=nullptr;
    int length=strlen(str.m_pData);
    m_pData=new char[length+1];
    strcpy(m_pData,str.m_pData);
    return *this;
}
CMystring::CMystring(char *pData)
{
    if(pData==nullptr)
    {
        m_pData=new char[1];
        m_pData[0]='\0';
    }
    else
    {
        int length=strlen(pData);
        m_pData=new char[length+1];
        strcpy(m_pData,pData);
    }
}
CMystring::CMystring(const CMystring &str)
{
    int length=strlen(str.m_pData);
    m_pData=new char[length+1];
    strcpy(m_pData,str.m_pData);
}
CMystring::~CMystring()
{
    delete [] m_pData;
}
void CMystring::Print()
{
    printf("%s",m_pData);
    printf(".\n");
}
void Test1()
{
    char *test="Hello World";
    CMystring str1(test);
    CMystring str2;
    str2=str1;
    str1.Print();
    str2.Print(); 
}
void Test2()
{
    char *test="Helo World";
    CMystring str1(test);
    str1=str1;
    str1.Print();
}
void Test3()
{
    char *test="Hello World";
    CMystring str1(test);
    CMystring str2,str3;
    str3=str2=str1;
    str3.Print();
    str2.Print();
}
int main(int argc,char *argv[])
{
    Test1();
    Test2();
    Test3();
}