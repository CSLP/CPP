#include"List.h"
posi ListNode::insertAsPred(const int e)
{
    posi p=new ListNode(e,pred,this);
    pred->succ=p;pred=p;
    return p;
}
posi ListNode::insertAsSucc(const int e)
{
    posi p=new ListNode(e,this,succ);
    succ->pred=p;succ=p;
    return p;
}
List::List(int *m,int lo,int hi)
{
    init();
    for(int i=lo;i<hi;i++)
        insertB(tailer,m[i]);
}
List::~List()
{
    clear();delete header;delete tailer;
}
posi List::first()const
{
    if(_size==0) return nullptr;
    return header->succ;
}
posi List::last()const
{
    if(_size==0) return nullptr;
    return tailer->pred;
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
    tailer=new ListNode();
    header->pred=nullptr;
    header->succ=tailer;
    tailer->pred=header;
    tailer->succ=nullptr;
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
    tailer->insertAsPred(e);
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
    return find(e,_size,tailer);
}
int List::deduplicate()
{
    int oldsize=_size;
    posi p=first();
    for(int r=0;p!=tailer;p=p->succ)
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
    // while(p->succ!=tailer) 笨比写法
    // {
    //     cout<<p->succ->data<<" ";        
    //     p=p->succ;
    // }
    while((p=p->succ)!=tailer)
        cout<<p->data<<" ";
    cout<<endl;
}
int List::uniquify()
{
    if(_size<2) return 0;
    int oldsize=_size;
    posi p=first();posi q;
    while((q=p->succ)!=tailer)    //以为链表的特殊性，删除只需要常数时间，所以不用像vector那样花里胡哨，直接找到一个删除一个，按顺序遍历即可
        if(q->data!=p->data) p=q;
        else remove(q);
    return oldsize-_size;
}
posi List::search(int e,int n,posi p)const
{
    if(n==0) return p->pred;
    int i;
    for(i=0;i<n;i++)
    {
        p=p->pred;
        if(p->data<=e) break;
    }
    if(i==n-1) return p->pred;
    return p;
}
posi List::selectMax(posi p,int n)
{
    posi max=p; int i=0;
    for(posi cur=p;i<n;cur=cur->succ,++i)  
        if(cur->data>=max->data) max=cur;
    return max;
}
void List::selectionSort(posi p,int n)
{
    posi head=p->pred;posi tail=p;
    for(int i=0;i<n;i++) tail=tail->succ;//待排序区间(head,tail)
    while(n>1)  //最多需要n-1次即可有序
    {
        insertB(tail,remove(selectMax(head->succ,n)));//找到最大者，删除，返回删除元素的值，然后插入尾后元素的前面，及插入待排序区间的最后
        n--;tail=tail->pred;//插入成功一次，排序区间规模减一，尾后位置往左进一步 
    }
}
void List::insertionSort(posi p,int n)
{
    for(int i=0;i<n;i++) 
    {
        insertA(search(p->data,i,p),p->data);
        p=p->succ;remove(p->pred) ;
    }
}