#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
      int val;
      Node*left;
      Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
};
Node* tree_input(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Node* root=new Node(val);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node *myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        p->left=myleft;
        p->right=myright;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
int sum_parent_node(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left!=NULL || root->right!=NULL){
        return root->val+sum_parent_node(root->left)+sum_parent_node(root->right);
    }
    return sum_parent_node(root->left)+sum_parent_node(root->right);
}
int main(){
    Node* root=tree_input();
    cout<<sum_parent_node(root);
    return 0;
}