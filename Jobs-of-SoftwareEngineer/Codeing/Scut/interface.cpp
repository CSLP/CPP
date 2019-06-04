#include"interface.h"
bool loginMatch(string type,string id,string passwd)
{
    if(type=="student"&&id=="110"&&passwd=="scut")
        return true;
    return true;

}

list<std::__cxx11::string> getStudentInfoByStudentId(string id)
{
        list<string> x;
        if(id=="110")
        {
            x.push_back("ID: 201630610571");
            x.push_back("Gender: Man");
            x.push_back("Departant: Computer");
            x.push_back("Birthday: 1996/02/11");
            return x;
        }
        else
            return x;
}

void signUpInfo(std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, std::__cxx11::string, QDate)
{

}

map<std::__cxx11::string, std::__cxx11::string> getCourseInfoByStudentId(std::__cxx11::string id)
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

std::__cxx11::string getTeacherInfoByCourseName(std::__cxx11::string corName)
{
        string teaInfo;
        if(corName=="Linux")
        {
           teaInfo="教师姓名：董守斌\n所属院系：计算机科学与工程学院\n个人简介： 董守斌（sbdong@scut.edu.cn），女，博士，教授。1994年博士毕业于中国科学技术大学信息科学与电子工程系，并在华南理工大学电子信息学院、信息网络工程研究中心、计算机学院任教至今。..." ;
           return teaInfo;
        }
        else
           return teaInfo;
}

std::__cxx11::string getCourseInfoByCourseName(std::__cxx11::string corName)
{
    string  corInfo;
    if(corName=="Linux")
    {
        corInfo="  本课程系统讲授网络信息检索涉及的理论和算法，并介绍当前这个领域的研究热点和发展动态。课程内容包括信息检索系统的数据结构与算法，包括信息检索的数据模型，信息获取和索引，分类与聚类，查询优化，信息摘要和性能评估，搜索引擎关键技术等。课程的目的是使学生了解网络环境下海量信息检索的基本理论和算法，并通过课程实验环节，学习和掌握网络信息检索的基础知识，为在这领域的深入研究和应用开发打下基础。";
        return corInfo;
    }
    else
        return corInfo;
}

list<std::__cxx11::string> getHomeworkInfoByCourseName(std::__cxx11::string corName)
{
    list<string> homeInfo;
    if(corName=="Linux")
    {
        homeInfo.push_back("p10 exercise 2");
        homeInfo.push_back("p10 exercise 2");
        homeInfo.push_back("p10 exercise 2");
        homeInfo.push_back("p10 exercise 2");
        homeInfo.push_back("p10 exercise 2");
        return homeInfo;
    }
    else
        return homeInfo;
}
