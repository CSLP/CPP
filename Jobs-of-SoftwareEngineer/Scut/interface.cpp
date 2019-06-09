#include"interface.h"
#include"user.h"
#include"head.h"
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

multimap<std::__cxx11::string, std::__cxx11::string> getCourseInfoByStudentId(std::__cxx11::string id)
{
    multimap<string,string> x;
    auto info=user->c_get_course_list();
    auto num=info["info"].size();
    for(int i=0;i<6;++i)
    {
        if(i<num)
            x.insert({info["info"][i]["C_NAME"].get<string>(),info["info"][i]["T_NAME"].get<string>()});
        else
            x.insert({" "," "});
    }
        return x;
}

list<std::__cxx11::string> getTeacherInfoByCourseName(std::__cxx11::string corName)
{

        list<string> x;
            x.push_back("ID:"+user->u_id);
            x.push_back("用户名:"+user->username);
            x.push_back("性别:"+user->sex);
            x.push_back("院系:"+user->dept);
            x.push_back("生日:"+user->birth);
            return x;
}

std::__cxx11::string getCourseInfoByCourseName(std::__cxx11::string corName)
{
    string  corInfo;
    if(corName=="软件工程")corInfo="软件工程是一门研究用工程化方法构建和维护有效的、实用的和高质量的软件的学科。它涉及程序设计语言、数据库、软件开发工具、系统平台、标准、设计模式等方面在现代社会中，软件应用于多个方面。典型的软件有电子邮件、嵌入式系统、人机界面、办公套件、操作系统、编译器、数据库、游戏等。同时，各个行业几乎都有计算机软件的应用，如工业、农业、银行、航空、政府部门等。这些应用促进了经济和社会的发展，也提高了工作效率和生活效率 。";
    if(corName=="高等数学")corInfo="指相对于初等数学而言，数学的对象及方法较为繁杂的一部分\
               广义地说，初等数学之外的数学都是高等数学，也有将中学较深入的代数、几何以及简单的集合论初步、逻辑初步称为中等数学的，将其作为中小学阶段的初等数学与大学阶段的高等数学的过渡。\
               通常认为，高等数学是由微积分学，较深入的代数学、几何学以及它们之间的交叉内容所形成的一门基础学科。";
   if(corName=="数值分析")corInfo="数值分析(numerical analysis)，是数学的一个分支，是研究分析用计算机求解数学计算问题的数值计算方法及其理论的学科。它以数字计算机求解数学问题的理论和方法为研究对象，为计算数学的主体部分。";
   if(corName=="概率论")corInfo="概率论与数理统计是数学的一个有特色且又十分活跃的分支，一方面，它有别开生面的研究课题，有自己独特的概念和方法，内容丰富，结果深刻;另一方面，它与其他学科又有紧密的联系，是近代数学的重要组成部分。由于它近年来突飞猛进的发展与应用的广泛性，目前已发展成为一门独立的一级学科。概率论与数理统计的理论与方法已广泛应用于工业、农业、军事和科学技术中，如预测和滤波应用于空间技术和自动控制，时间序列分析应用于石油勘测和经济管理，马尔科夫过程与点过程统计分析应用于地震预测等，同时他又向基础学科、工科学科渗透，与其他学科相结合发展成为边缘学科，这是概率论与数理统计发展的一个新趋势。";
   if(corName=="微分方程定性理论")corInfo="《微分方程定性理论》是作者在常微分方程定性理论的多年教学和科研工作的基础上写成的，着重介绍平面定性理论的主要内容和方法，重点是：平面奇点，极限环的存在，唯一性及个数，无穷远奇点，二维周期系统的调和解，环面上的常微系统，二维流形上的结构稳定性。《微分方程定性理论》各章均附有习题。";
   if(corName=="Java程序设计")corInfo="Java是一种优秀的面向对象的语言，具有跨平台性、用途广泛、容易学习等特点，众多的开源项目都是用Java实现的，可以说Java是程序设计必学的语言。这门课程掌握Java语言、面向对象的特点，掌握Java在多线程、图形用户界面、网络等方面的应用，同时要养成良好的编程习惯，能够编写有一定规模的应用程序。";
   return corInfo;

}

list<std::__cxx11::string> getHomeworkInfoByCourseName(std::__cxx11::string corId)
{
    list<string> homeInfo;
    auto corli=user->c_get_course_list();
    for(int i=0;i<corli["info"].size();i++)
    {
        if(corId==corli["info"][i]["C_NAME"].get<string>())
        {
            auto re=user->c_get_course_notice(corli["info"][i]["C_ID"].get<string>());
            for(int j=0;j<re["info"].size();j++)
            {
                homeInfo.push_back(re["info"][j]["M_CONTENT"].get<string>()+"   "+re["info"][j]["M_TIME"].get<string>());
            }
        }
    }
    if(homeInfo.size()==0)
        homeInfo.push_back("暂无");
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
    auto se=user->c_get_course_list();
    for(int i=0;i<se["info"].size();i++)
    {
            if(se["info"][i]["C_NAME"].get<string>()==corname)
            {
                auto res=user->c_get_topic(se["info"][i]["C_ID"].get<string>());
            }
    }
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
    qDebug()<<"xintaibengle";
    auto info=user->c_get_course_list();
    qDebug()<<"nimasiel";
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
