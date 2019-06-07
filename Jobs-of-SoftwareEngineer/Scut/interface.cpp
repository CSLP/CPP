#include"interface.h"
#include"user.h"
#include"head.h"
//User user(__C["MAINSERVER"]["IP"].get<string>(), __C["MAINSERVER"]["PORT"].get<int>());
bool loginMatch(string type,string id,string passwd)
{
        bool y=user->c_login(id,passwd);
    return y && user->role_type == type;
}

list<std::__cxx11::string> getStudentInfoByStudentId(string id)
{
        list<string> x;
            x.push_back("ID:"+user->u_id);
            x.push_back("用户名:"+user->username);
            x.push_back("性别:"+user->sex);
            x.push_back("院系:"+user->dept);
            x.push_back("生日:"+user->birth);
            return x;
}

bool signUpInfo(std::__cxx11::string userName, std::__cxx11::string userId, std::__cxx11::string dep, std::__cxx11::string gender, std::__cxx11::string pwd, std::__cxx11::string type, std::__cxx11::string bir)
{
    bool res;
    user->username=userName;
    user->u_id=userId;
    user->dept=dep;
    user->birth=bir;
    user->password=pwd;
    string g;
    if(gender=="boy")
        g="b";
    else
        g="g";
    user->sex=g;
    user->role_type=type;
    res=user->c_register();
    return res;
}

map<std::__cxx11::string, std::__cxx11::string> getCourseInfoByStudentId(std::__cxx11::string id)
{
    map<string,string> x;
    auto info=user->c_get_course_list();
    auto num=info["info"].size();
    for(int i=0;i<6;++i)
    {
        if(i<num)
            x.insert({info["info"][i]["C_NAME"].get<string>(),info["info"][i]["T_NAME"].get<string>()});
        else
            x.insert({ std::to_string(i)," "});
    }
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

bool sendToSubmitFilePaths(list<std::__cxx11::string> paths)
{
    for(auto a:paths)
    {
        qDebug()<<QString::fromStdString(a);
    }
    return true;
}

list<std::__cxx11::string> getStudentAttendanceByStudentId(std::__cxx11::string id)
{
        list<string> x;
        auto info=user->c_get_course_list();
        for(int i=0;i<info["info"].size();++i)
        {
            x.push_back(info["info"][i]["C_NAME"].get<string>()+": "+info["info"][i]["ABSENT_CNT"].get<string>());
        }
        return x;
}

vector<Message> getTopicsByCourseName(std::__cxx11::string corname)
{
    vector<Message> topic;
    if(corname=="Linux")
    {
       topic.push_back(Message("wuyulp","PKI的第七章第八题考不考?",1,"2017-02-02",""));
       topic.push_back(Message("jyp","软件工程大作业怎么做?",2,"2019-06-04",""));
       topic.push_back(Message("LP","你是真的牛逼?",3,"2000-02-02",""));
    }
    return topic;
}

vector<Message> getCommentsByTopicId(int id)
{
    vector<Message> comment;
    switch(id)
    {
        case 1:
                {
                    comment.push_back(Message("Tom","去年秋冬，ONE实验室作者生活在《乘风破浪》剧组中间，见证了拍摄过\n\
fsdffdsafffffffffffffffffffffffffffffffffffffffffffff写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记\
写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记"
                                                   ,1,"2000-02-02",""));
                    comment.push_back(Message("Brunce","去年秋冬，ONE实验室作者生活在《乘风破浪》剧组中间，见证了拍摄过\n\
fsdffdsafffffffffffffffffffffffffffffffffffffffffffff写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记\
写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记写给那个茶水妹的《乘风破浪》诞生记"
                                                   ,2,"2000-02-02",""));
                    comment.push_back(Message("Tony","去年秋冬，ONE实验室作者生活在《乘风破浪》剧组中间，见证了拍摄过\n\
                                                    fsdffdsafffffffffffffffffffffffffffffffffffffffffffff\n\
                                                    fjadksl;fjadsjfl;jadslkfjla;dksjflk;dasjlfkjadlks;jfkl;"
                                                   ,3,"2000-02-02",""));
                 }
    }
    return comment;
}

vector<Message> getReplysByCommentId(int id)
{
    vector<Message> reply;
    switch(id)
    {
        case 1:
            reply.push_back(Message("File","求你不要真眼说瞎话了",1,"2000-02-02","LP"));
            reply.push_back(Message("Edit","求你不要真眼说瞎话了",2,"2000-02-02","JYP"));
            reply.push_back(Message("Build","求你不要真眼说瞎话了",3,"2000-02-02","ZYH"));
    }
    return reply;
}

vector<CourseInfo> getCourseListByTeacherId(std::__cxx11::string id)
{
    auto info=user->c_get_course_list();
    int num=info["info"].size();

    qDebug()<<QString::fromStdString(info["info"][0]["C_ID"].get<string>());
    vector<CourseInfo>  l;
    for(int i=0;i<num;++i)
        l.push_back(CourseInfo(info["info"][i]["C_ID"].get<string>(),info["info"][i]["C_NAME"].get<string>()));
    return l;

}

vector<StudentInfo> getStudentListByCourseId(std::__cxx11::string id)
{
    vector<StudentInfo> l;
    qDebug()<<QString::fromStdString(id);
    auto info=user->c_get_student_list(id);
    auto num=info["info"].size();
    LOG(INFO)<<info.dump();
    for(int i=0;i<num;i++)
        l.push_back(StudentInfo(info["info"][i]["U_ID"].get<string>(),info["info"][i]["USERNAME"].get<string>(),info["info"][i]["ABSENT_CNT"].get<string>()));
    return l;
}

bool updateInfo(std::__cxx11::string p, std::__cxx11::string sex, std::__cxx11::string bir, std::__cxx11::string dep)
{
    auto ok=user->c_update_info(p,sex,bir,dep);
    return ok;
}

bool sendEmail(std::__cxx11::string name, std::__cxx11::string theme, std::__cxx11::string plain)
{
    auto ok=user->c_send_email(name,theme,plain);
    return ok;
}
