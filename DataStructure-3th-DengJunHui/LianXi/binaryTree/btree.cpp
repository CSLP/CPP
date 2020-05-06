#include<iostream>
#include<stack>
#define stature(p)  ((p)?p->height:-1)
using namespace std;
struct BinNode;
using bpos=BinNode*;
int max(int a,int b)
{
    return a>b?a:b;
}
struct BinNode
{
   bpos parent,lc,rc;
   BinNode(char e,bpos pos):data(e),lc(nullptr),rc(nullptr),parent(pos),height(1){}
   char data;int height;
   int size();
   bpos insertAsLc(char);
   bpos insertAsRc(char);
   bpos succ();
   void travLevel();
   void travPre();
   void travIn();
   void travPost();
};
bpos BinNode::insertAsLc(char e)
{return lc=new BinNode(e,this);}
bpos BinNode::insertAsRc(char e)
{return rc=new BinNode(e,this);}
int BinNode::size()
{
    int s=1;
    if(lc) s+=lc->size();
    if(rc) s+=rc->size();
    return s;
}
//BinTree


class BinTree
{
    protected:
        int _size;
        bpos _root;
        virtual int updateHeight(bpos x);
        void updateHeightAbove(bpos x);
    public:
        BinTree()=default;
        BinTree(bpos x):_root(x),_size(x->size()){}
        int size()const{return _size;}
        bool empty()const {return !_root;}
        bpos root()const {return _root;}
        bpos insertAsRc(bpos,char);
        bpos insertAsLc(bpos,char);
        bpos attackAsRc(bpos,BinTree * &);
        bpos attackAsLc(bpos,BinTree * &);
        int remove(bpos);
        BinTree * secede(bpos);
};
int BinTree::updateHeight(bpos x)
{
    return x->height=1+max(stature(x->lc),stature(x->rc));
}
void BinTree::updateHeightAbove(bpos x)
{
    while(x){updateHeight(x);x=x->parent;}
}
bpos BinTree::insertAsRc(bpos x,char e)
{
    _size++;x->insertAsRc(e);
    updateHeightAbove(x);
    return x->rc;
}
bpos BinTree::insertAsLc(bpos x,char e)
{
    _size++;x->insertAsLc(e);
    updateHeightAbove(x);
    return x->lc;
}
bpos BinTree::attackAsRc(bpos x,BinTree* & s)
{
    if(x->rc=s->_root) x->rc->parent=x;
    _size+=s->_size;
    updateHeightAbove(x);
    s->_root=nullptr;s->_size=0;
    // release(s);s=nullptr;
}
bpos BinTree::attackAsLc(bpos x,BinTree* & s)
{
    if(x->lc=s->_root) x->lc->parent=x;
    _size+=s->_size;
    updateHeightAbove(x);
    s->_root=nullptr;s->_size=0;
    // release(s);s=nullptr;
}
static int removeAt(bpos x)
{
    if(!x) return 0;
    int n=1+removeAt(x->lc)+removeAt(x->rc);
    // release(x->data);release(x);return n;
}
int BinTree::remove(bpos x)//子树删除
{
    // FromParentTo(*x)=nullptr;
    updateHeightAbove(x->parent);
    int n=removeAt(x);_size-=n;return n;
}
BinTree * BinTree::secede(bpos x)//子树分离
{
    // FromParentTo(*x)=nullptr;
    updateHeightAbove(x->parent);
    BinTree *s=new BinTree;
    s->_root=x;x->parent=nullptr;
    s->_size=x->size();_size-=s->_size;
    return s;
}
bool hasRChild(BinNode x)
{
    return x.rc?true:false;
}
bool hasLChild(BinNode x)
{
    return x.lc?true:false;
}
void travPre(bpos x)//先序遍历递归
{
    if(!x) return ;
    cout<<x->data<<" ";
    travPre(x->lc);
    travPre(x->rc);
}
void travPre_I1(bpos x)//借助栈的先序遍历
{
    stack<bpos> s;
    if(x) s.push(x);
    while(!s.empty())
    {
        x=s.top();s.pop(); cout<<x->data<<" ";
        if(hasRChild(*x)) s.push(x->rc);
        if(hasLChild(*x)) s.push(x->lc);
    }
}
void visitAlongVine(bpos x,stack<bpos> &s)
{
    while(x)
    {
        cout<<x->data<<" ";
        s.push(x->rc);
        x=x->lc;
    }
}
void travPre_I2(bpos x)
{
    stack<bpos> s;
    while(true)
    {
        visitAlongVine(x,s);
        if(s.empty()) break;
        x=s.top();
        s.pop();
    }
}
void travIn(bpos x)
{
    if(!x) return;
    travIn(x->lc);
    cout<<x->data<<" ";
    travIn(x->rc);
}
void goAlongVine(bpos x,stack<bpos>&s)
{
    while(x)
    {
        s.push(x);x=x->lc;
    }
}
void travIn_I1(bpos x)
{
    stack<bpos> s;
    while(true)
    {
        goAlongVine(x,s);
        if(s.empty()) break;
        x=s.top();s.pop();
        cout<<x->data<<" ";
        x=x->rc;
    }
}
int main()
{
    BinNode * root=new BinNode('A',nullptr);
    BinTree test(root);
    auto i=test.insertAsLc(root,'B');
    auto j=test.insertAsRc(root,'C');
    auto k=test.insertAsLc(i,'D');
    test.insertAsRc(i,'E');
    auto kk=test.insertAsLc(j,'F');
    test.insertAsLc(k,'G');
    test.insertAsRc(kk,'H');
    travPre(test.root());cout<<endl;
    travPre_I1(test.root());cout<<endl;
    travPre_I2(test.root());cout<<endl;
    travIn(test.root());cout<<endl;
    travIn_I1(test.root());cout<<endl;
    system("pause");
}