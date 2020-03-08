#include<iostream>
using std::cout;
using std::endl;
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
            posi header;posi trailer;
    protected:
            void init();
            int clear();
            void copyNodes(posi p,int n);//拷贝别的链表的从p开始的n个节点
    public:
            ~List();
            int operator[](int r)const;
            posi first()const;
            posi last()const;
            int size()const;
            void insertAsFirst(int);
            void insertAsLast(int);
            posi insertA(posi p,int e);//将e当做p的直接后继插入
            posi insertB(posi p,int e);//将e当做p的直接前驱插入
            int remove(posi p);//删除p节点,返回其数值
            int disorder()const;//判断是否有序，返回逆序数
            void sort();
            posi find(int e)const;//查找,查找失败返回空指针
            posi find(int e,int n,posi p)const;//区间查找,从后往前查找，若命中返回秩最大者，
            posi search(int e);
            int deduplicate(); //无序向量去重，返回删除元素的个数
            int uniquify();//有序向量去重返回删除元素的个数
            void traverse();
};
posi ListNode::insertAsPred(const int e)
{
    posi p=new ListNode(e,succ,this);
    pred->succ=p;pred=p;
    return p;
}
posi ListNode::insertAsSucc(const int e)
{
    posi p=new ListNode(e,this,succ);
    succ->pred=p;succ=p;
    return p;
}
List::~List()
{
    clear();delete header;delete trailer;
}
int List::clear()
{
    int oldsize=_size;
    while(_size)
        remove(header->succ);
    return oldsize;
}
void List::init()
{
    header=new ListNode();
    trailer=new ListNode();
    header->pred=nullptr;
    header->succ=trailer;
    trailer->pred=header;
    trailer->succ=nullptr;
    _size=0;
}
int List::operator[](int r)const
{
    //假设0<=r<_size
    posi p=first();
    while(r--)
        p=p->succ;
    return p->data;
}
posi List::insertB(posi p,int e)
{
    _size++;return p->insertAsPred(e);
}
posi List::insertA(posi p,int e)
{
    _size++;return p->insertAsSucc(e);
}
int List::remove(posi p)
{
    int e=p->data;
    p->pred->succ=p->succ;
    p->succ->pred=p->pred;
    delete p;_size--;return e;
}

void List::insertAsLast(int e)
{
    trailer->insertAsPred(e);
}
void List::insertAsFirst(int e)
{
    header->insertAsSucc(e);
}
void List::copyNodes(posi p,int n)
{
    init();
    while(n--)
    {
        insertAsLast(p->data);
        p=p->succ;
    }
}
posi List::find(int e,int n,posi p)const//类似vector无序向量，从后向前查找,从p开始往前查找n个,不包括p本身
{
    while(n--) 
        if(e==(p=p->pred)->data) return p;
    return nullptr;
}
posi List::find(int e)const
{
    return find(e,_size,trailer);
}
int List::deduplicate()
{
    int oldsize=_size;
    posi p=first();
    for(int r=0;p!=trailer;p=p->succ)
    {   
        if(find(p->data,r,p))
            remove(p);
        else 
            r++;
    }
    return oldsize-_size;
}
void List::traverse()
{
    posi p=header;
    // while(p->succ!=trailer) 笨比写法
    // {
    //     cout<<p->succ->data<<" ";        
    //     p=p->succ;
    // }
    while((p=p->succ)!=trailer)
        cout<<p->data<<" ";
    cout<<endl;
}
int List::uniquify()
{
    if(_size<2) return 0;
    int oldsize=_size;
    posi p=first();posi q;
    while((q=p->succ)!=trailer)    //以为链表的特殊性，删除只需要常数时间，所以不用像vector那样花里胡哨，直接找到一个删除一个，按顺序遍历即可
        if(q->data!=p->data) p=q;
        else remove(q);
    return oldsize-_size;
}

