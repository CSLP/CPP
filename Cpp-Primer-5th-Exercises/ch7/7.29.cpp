#include<string>
#include<iostream>
using std::istream;
using std::ostream;
using std::string;
using std::cout;
using std::cin;
class Screen
{
public:
    using pos=string::size_type;
    Screen()=default;
    Screen(pos h,pos w):height(h),width(w),content(h*w,0){};
    Screen(pos h,pos w,char c):height(h),width(w),content(h*w,c){};
    char getChar(){return content[cur];}
    char getChar(pos,pos)const;
    Screen move(pos,pos);
    Screen set(char);
    Screen &set(pos,pos,char);
    Screen display(ostream &out)
    {do_display(out);return *this;}
    const Screen display(ostream &out)const
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
inline Screen Screen::move(pos x,pos y)
{
    cur=x*width+y;
    return *this;
}
inline Screen Screen::set(char x)
{
    content[cur]=x;
    return *this;
}
inline Screen &Screen::set(pos x,pos y,char c)
{
    content[x*width+y]=c;
    return *this;
}
int main()
{
    Screen myScreen(5,5,'X');
    myScreen.display(cout);
    cout<<"\n";
    myScreen.move(4,0).set('#').display(cout);
    cout<<"\n";
    myScreen.display(cout);
    cout<<"\n";
}
