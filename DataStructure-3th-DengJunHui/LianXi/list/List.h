#include<iostream>
using std::cout;
using std::endl;
struct ListNode;//加一句ListNode的声明，否则第5句的声明类型别名不知道ListNode是个什么东西
using posi=ListNode*;
struct ListNode
{
    int data;
    posi pred;
    posi succ;
    ListNode(){}
    ListNode(int e,posi p=nullptr,posi s=nullptr):data(e),pred(p),succ(s){}
    posi insertAsPred(const int e);
    posi insertAsSucc(const int e);
};
class List
{
    private:
            int _size;
            posi header;posi tailer;
    protected:
            void init();
            int clear();
            void copyNodes(posi p,int n);//拷贝别的链表的从p开始的n个节点
            posi selectMax(posi p,int n);//从p开始(包括p)的n个节点中的最大者
    public:
            ~List();
            List(int *,int ,int ) ;//从数组复制的到链表
            List(){init();}
            int operator[](int r)const;
            posi first()const;
            posi last()const;
            int size()const
            {return _size;}
            void insertAsFirst(int);
            void insertAsLast(int);
            posi insertA(posi p,int e);//将e当做p的直接后继插入
            posi insertB(posi p,int e);//将e当做p的直接前驱插入
            int remove(posi p);//删除p节点,返回其数值
            int disorder()const;//判断是否有序，返回逆序数
            void sort();
            posi find(int e)const;//查找,查找失败返回空指针
            posi find(int e,int n,posi p)const;//区间查找，在p的前n个前缀节点中,从后往前查找，若命中返回秩最大者，
            posi search(int e,int n,posi p)const;//区间查找,在p的前n个前缀节点中,从后往前查找，若命中返回秩最大者，,跟无序向量的版本一样，因为链表的特殊性，只能顺序的访问，不能随机访问
            int deduplicate(); //无序向量去重，返回删除元素的个数
            int uniquify();//有序向量去重返回删除元素的个数
            void traverse();
            void selectionSort(posi p,int n);//从p开始（包括p）的n个连续的区间排序，隐含假设p有效且这个区间长度小于_size
};