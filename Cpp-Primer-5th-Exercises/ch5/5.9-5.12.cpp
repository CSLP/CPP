#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
    char a;
    unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
//  5.9
/*  while(cin>>a)
    {
        if(a=='a')  ++aCnt;
        if(a=='e')  ++eCnt;
        if(a=='i')  ++iCnt;
        if(a=='o')  ++oCnt;
        if(a=='u')  ++uCnt;
    }
    cout<<aCnt<<" "<<eCnt<<" "<<iCnt<<" "<<oCnt<<" "<<uCnt<<endl;
*/
// 5.10-5.11
    aCnt=eCnt=iCnt=oCnt=uCnt=0;
    unsigned sCnt=0,tCnt=0,rCnt=0,fCnt=0;
    while(cin.get(a))
    {
        switch(a)
        {
            case 'a':case 'A':
                {
                    ++aCnt;
                    break;
                }
            case 'e':case 'E':
                {
                    ++eCnt;
                    break;
                }
            case 'i':case 'I':
                {
                    ++iCnt;
                    break;
                }
            case 'o':case 'O':
                {
                    ++oCnt;
                    break;
                }
            case 'u':case 'U':
                {
                    ++uCnt;
                    break;
                }
            case ' ':
                {
                    ++sCnt;
                    break;
                }
            case '\t':
                {
                    ++tCnt;
                    break;
                }
            case '\n':
                {
                    ++rCnt;
                    break;
                }
            case 'f':++fCnt;break;
            default:break;
        }
    }
    cout<<aCnt<<" "<<eCnt<<" "<<iCnt<<" "<<oCnt<<" "<<uCnt<<" "<<sCnt<<" "<<tCnt<<" "<<rCnt<<" "<<fCnt<<endl;
// 5.12
/*
    string  word;
    unsigned ffCnt=0,flCnt=0,fiCnt=0;
    while(cin>>word)
    {
        for(auto i=word.cbegin();i+1!=word.cend();++i)
        switch(*i)
        {
            case 'f':
            {
                switch(*(i+1))
                {
                    case 'f':++ffCnt;break;
                    case 'l':++flCnt;break;
                    case 'i':++fiCnt;break;
                    default:break;
                }
                break;
            }
            default:break;
        }
    }
    cout<<ffCnt<<" "<<flCnt<<" "<<fiCnt<<endl;
 */           
}