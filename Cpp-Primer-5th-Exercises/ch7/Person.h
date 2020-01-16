#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using std::istream;
using std::ostream;
using std::string;
class Person
{
        friend istream & read(istream &in,Person &b);
        friend ostream & print(ostream&out,const Person&b);
public:
        Person()=default;
        Person(const string &n):name(n){};
        Person(const string &n,const string &a):name(n),address(a){};
        Person(istream &);
        string getName() const   { return name;}
        string getAddress()const { return address;}
private:
        string  name;
        string  address;
};
istream & read(istream &in,Person &b)
{
    in>>b.name>>b.address; 
    return in;
}
ostream & print(ostream&out,const Person&b)
{
    out<<b.getName()<<" "<<b.getAddress()<<" ";
}
Person::Person(istream &in)
{
    read(in,*this);
}
#endif