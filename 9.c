#include<stdio.h>
#include<iostream>

typedef char TreeData;
typedef struct Bnode
{
    TreeData data;
	struct Bnode *lchild;
	struct Bnode *rchild;
};

Bnode BinTreeNode;

void creat(BinTreeNode *q,int k,int end)
{
    BinTreeNode *p;
    int x;
    cin>>x;
    if(x!=0)
    {
        p=new BinTreeNode;
        p->d=x;
        p->lchild=NULL;
        p->rchild=NULL;
        if(k==1)
        {
            q->lchild=p;
        }
        if(k==2)
        {
            q->rchild=p;
        }
        cout<<"输入左子节点"<<endl;creat(p,1,end);
        cout<<"输入右子节点"<<endl;creat(p,2,end)
    }
    return 0;
}

int main()
{
	struct Bnode My_node;
	struct Bnode My_root;
	My_root.data=1;
	My_root.lchild=NULL;
	My_root.rchild=NULL;
}
