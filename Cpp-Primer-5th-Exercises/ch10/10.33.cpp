#include<iostream>
#include<iterator>
#include<fstream>
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
    while(input!=eof)
    {
        if(*input%2)
            output1=*input++;
        else
            output2=*input++; 
    }
}
