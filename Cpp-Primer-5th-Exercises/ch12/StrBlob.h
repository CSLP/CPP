#ifndef STRBLOG_H
#define STRBLOG_H
#include<iostream>
#include<memory>
#include<initializer_list>
#include<vector>
#include<string>
using namespace std;
class StrBlob
{
public:
        using size_type=vector<string>::size_type;
        StrBlob();
        StrBlob(initializer_list<string>);
        const string & front()const;
        string &front();
        const string &back() const;
        string &back();
        size_type size()const {return data->size();}
        bool empty()const {return data->empty();}
        void push_back(const string &);
        void pop_back();
private:
        shared_ptr<vector<string>> data;
        void check(size_type ,const string &)const;
};
StrBlob::StrBlob():data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> li):data(make_shared<vector<string>>(li)){}
const string &StrBlob::front()const
{ 
    check(0,"front an empty vector!");
    return data->front();
}
string &StrBlob::front()
{ 
    check(0,"front an empty vector!");
    return data->front();
}
const string &StrBlob::back() const
{
    check(0,"back on empty vector!");
    return data->back();
}
string &StrBlob::back() 
{
    check(0,"back on empty vector!");
    return data->back();
}
void StrBlob::push_back(const string & a)
{
    check(0,"push_back on empty vector!");
    data->push_back(a);
}
void StrBlob::pop_back()
{
    check(0,"pop_back on empty vector!");
    data->pop_back();
}
void StrBlob::check(size_type i,const string &msg) const
{
    if(data->size()<=i)
        throw out_of_range(msg);
}
#endif