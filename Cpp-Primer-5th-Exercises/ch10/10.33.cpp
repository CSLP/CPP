#include<iostream>
#include<iterator>
#include<fstream>
#include<algorithm>
using namespace std;
int main(int argc,char* argv[])
{
    ifstream in(argv[1]);
    ofstream out1(argv[2]),out2(argv[3]);
    if(!in.is_open()||!out1.is_open()||!out2.is_open())
    {
        cout<<"No file!";
        return 0;
    }
    istream_iterator<int> input(in),eof;
    ostream_iterator<int> output1(out1," "),output2(out2,"\n");
//太复杂,垃圾,没有提下iostream迭代器的强大之处
/*
    while(input!=eof)
    {
        if(*input%2)
            output1=*input++;
        else
            output2=*input++; 
    }
*/
//以后对某一迭代器指示的范围中的每一个元素调用某种操作,就用for_each,好用的一笔
    for_each(input,eof,[&](int a){ a%2?output1=a:output2=a; });
}
