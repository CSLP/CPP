#ifndef SCREEN_H
#define SCREEN_H
#include<string>
#include<iostream>
#include<vector>
using std::vector;
using std::istream;
using std::ostream;
using std::string;
class Screen;
class Window_mgr
{
public:
    using ScreenIndex=vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    vector<Screen> screens;//删除{Screen(24,80)}不然a用b的成员,b用a的成员,怎么调顺序也没有用.
};
class Screen
{
public:
    friend void Window_mgr::clear(ScreenIndex);
    using pos=string::size_type;
    Screen()=default;
    Screen(pos h,pos w):height(h),width(w),content(h*w,0){};
    Screen(pos h,pos w,char c):height(h),width(w),content(h*w,c){};
    char getChar(){return content[cur];}
    char getChar(pos,pos)const;
    Screen &move(pos,pos);
    Screen &set(char);
    Screen &set(pos,pos,char);
    Screen &display(ostream &out)
    {do_display(out);return *this;}
    const Screen &display(ostream &out)const
    {
        do_display(out);return *this;
    }
private:
    void do_display(ostream &out)const {out<<content;}
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
inline Screen &Screen::set(char x)
{
    content[cur]=x;
    return *this;
}
inline Screen &Screen::set(pos x,pos y,char c)
{
    content[x*width+y]=c;
    return *this;
}
void Window_mgr::clear(ScreenIndex x)
{
    auto &a=screens[x];
    a.content=string(a.width*a.height,' ');
}
int main()
{
    return 0;
}

#endif