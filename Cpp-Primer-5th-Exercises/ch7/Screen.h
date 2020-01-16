#ifndef SCREEN_H
#define SCREEN_H
#include<string>
using std::string;
class Screen
{
public:
    using pos=string::size_type;
    Screen()=default;
    Screen(pos h,pos w):height(h),width(w),content(h*w,0){};
    Screen(pos h,pos w,char c):height(h),width(w),content(h*w,c){};
    char getChar(){return content[cur];}
    char getChar(pos,pos)const;
    Screen &move(pos,pos);
private:
    pos cur=0;
    pos height=0,width=0;
    string content;
};
inline char Screen::getChar(pos x,pos y) const
{
    return content[x*width+y];
}
inline Screen &Screen::move(pos x,pos y)
{
    cur=x*width+y;
    return *this;
}
int main()
{
    return 0;
}
#endif