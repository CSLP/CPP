#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a=10,b=70,c=80,d=100;
    cout<<((a>90)?"high pass!\n":(a>75)?"pass\n":(a>60)?"low pass!\n":"fail!\n");
    cout<<((b>90)?"high pbss!\n":(b>75)?"pbss\n":(b>60)?"low pbss!\n":"fbil!\n");
    cout<<((c>90)?"high pcss!\n":(c>75)?"pcss\n":(c>60)?"low pcss!\n":"fcil!\n");
    cout<<((d>90)?"high pdss!\n":(d>75)?"pdss\n":(d>60)?"low pdss!\n":"fdil!\n");
    if(a>90)
        cout<<"high pass!\n";
    else if(a>75)
            cout<<"pass!\n";
        else if(a>60) 
                cout<<"low pass!\n";
            else
                cout<<"fail!\n"; 
        
}