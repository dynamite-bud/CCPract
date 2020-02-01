#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    Node();
    Node(int);
    Node* lchild;
    int data;
    Node* rchild;
};

Node::Node():data(-1),lchild(NULL),rchild(NULL){}
Node::Node(int val):data(val),lchild(NULL),rchild(NULL){}

class binTree{
private:
    int numNodes;
    Node* root;
public:
    binTree();
    binTree(int);
    Node* ins(int val){
        ins(val,root);
    }
    Node* ins(int,Node*);
    Node* del(int val){
        del(val,root);
    }
    Node* del(int,Node*);
    void print();
};
binTree::binTree():numNodes(0),root(NULL){}
binTree::binTree(int val){
    root=new Node(val);
    numNodes=1;
}
Node* ins(int val,Node* pRoot){
    if(pRoot==NULL){
        Node* temp=new Node(val);
        return temp;
    }
    if(val < pRoot->data){
        pRoot->lchild=ins(val,pRoot->lchild);
    }
    else if(val > pRoot->data){
        pRoot->rchild=ins(val,pRoot->rchild);
    }
    return pRoot;
}
Node* binTree::del(int val,Node* pRoot){

}



int main(){
    return 0;
}
