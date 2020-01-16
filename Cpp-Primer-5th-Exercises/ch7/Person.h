#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using std::istream;
using std::ostream;
using std::string;
class Person
{
public:
        string  name;
        string  address;
        Person()=default;
        string getName() const   { return name;}
        string getAddress()const { return address;}
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
#endif