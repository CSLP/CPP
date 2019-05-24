#include"interface.h"
bool loginMatch(string type,string id,string passwd)
{
    if(type=="student"&&id=="110"&&passwd=="scut")
        return true;
    return true;

}

list<std::__cxx11::string> getInfoStringList(string id)
{
        list<string> x;
        if(id=="110")
        {
            x.push_back("ID: 201630610571");
            x.push_back("Gender: Man");
            x.push_back("Departant: Computerjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj");
            x.push_back("Birthday: 1996/02/11");
            return x;
        }
        else
            return x;
}

void signUpInfo(std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, QDate)
{

}

map<std::__cxx11::string, std::__cxx11::string> getCoursesMap(std::__cxx11::string id)
{
    map<string,string> x;
    if(id=="110")
    {
        x.insert({"Network","Teacher:Yuanhua"});
        x.insert({"OS","Teacher:BuSheHui"});
        x.insert({"PKI","Teacher:XuLinlin"});
        x.insert({"Math","Teacher:BuSheHui"});
        x.insert({"Linux","Teacher:BuSheHui"});
        x.insert({"Ubuntu","Teacher:BuSheHui"});
        return x;
    }
    else
        return x;
}
