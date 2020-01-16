#ifndef SCREEN_H
#define SCREEN_H
#include<string>
using std::string;
class Screen
{
public:
    using pos=string::size_type;
    Screen()=default;
    Screen(pos h,pos w):cur(0),height(h),width(w),content(h*w,0){};
    Screen(pos c,pos h,pos w):cur(c),height(h),width(w),content(h*w,0){};
    char getChar(){return content[cur];}
    char getChar(pos,pos)const;
    Screen &move(pos,pos);
private:
    pos cur;
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
}
#endif