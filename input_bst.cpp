#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node*input_tree(){
     int val;
     cin>>val;
     Node* root;
     if(val==-1)root=NULL;
     else root=new Node(val);
     queue<Node*>q;
     if(root)q.push(root);
     while(!q.empty()){
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1)myleft=NULL;
        else myleft=new Node(l);
        if(r==-1)myright=NULL;
        else myright=new Node(r);
        p->left=myleft;
        p->right=myright;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
     }
     return root;
}

bool search(Node* root,int val){
    bool l=false,r=false;
    if(root==NULL)return false;
    if(root->val==val)return true;
    if(root->val>val){
         l=search(root->left,val);
    }
    else{
         r=search(root->right,val);
    }
    return l||r;

}
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Node* root=input_tree();
    int val;
    cin>>val;
    if(search(root,val))
       cout<< "f";
       else cout<<"n";
    return 0;
}