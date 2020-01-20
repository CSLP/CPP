#include<iostream>
#include<iterator>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ifstream in("./ch10/10.29.in");
    istream_iterator<string> input(in),eof;
    vector<string> a(input,eof);
    ostream_iterator<string> out(cout,"**");
    copy(a.begin(),a.end(),out);


    istream_iterator<int> inputInt(cin),eofInt;
    ostream_iterator<int> outputInt(cout," ");
    vector<int> b(inputInt,eofInt);
    sort(b.begin(),b.end());
    copy(b.begin(),b.end(),outputInt);

    cin.clear();
    istream_iterator<int> inputI(cin),eoff;
    ostream_iterator<int> output(cout," ");
    vector<int> c(inputI,eoff);
    sort(c.begin(),c.end());
    unique_copy(c.begin(),c.end(),output);
}