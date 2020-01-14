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
    string a,curWord,maxWord;
    int maxWordCnt=1,curWordCnt=1;
    while(cin>>a)
    {
        if(a==curWord)
            ++curWordCnt;
        else
        {
            if(curWordCnt>maxWordCnt) 
            {
                maxWordCnt=curWordCnt;
                maxWord=curWord;
            }
            curWord=a;
            curWordCnt=1;
        }
        
    }
    if(curWordCnt>maxWordCnt) 
    {
        maxWordCnt=curWordCnt;
        maxWord=curWord;
    }
    cout<<maxWord<<":"<<maxWordCnt<<endl;
}
/*
#include <iostream>
#include <string>
int main() 
{
  std::string word, duplicatedWord, maxDuplicatedWord;
  unsigned cnt = 0, maxCnt = 0;
  while (std::cin >> word) {
    if (word == duplicatedWord)
      ++cnt;
    else {
      if (cnt > maxCnt) {
        maxDuplicatedWord = duplicatedWord;
        maxCnt = cnt;
      }
      duplicatedWord = word;
      cnt = 1;
    }
  }
  if (cnt > maxCnt) {
    maxDuplicatedWord = duplicatedWord;
    maxCnt = cnt;
  }
  std::cout << maxDuplicatedWord << " occurs " << maxCnt
            << " time" << (maxCnt > 1 ? "s" : "") << ". " << std::endl;

  return 0;
}
*/